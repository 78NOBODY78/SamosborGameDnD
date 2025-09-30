cmake_minimum_required(VERSION 3.16)

project(SamosborGameDnD VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Поиск Qt
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# 🔹 Указываем исходные файлы проекта
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp mainwindow.h mainwindow.ui
    gamemodewindow.cpp gamemodewindow.h gamemodewindow.ui
    playermodewindow.cpp playermodewindow.h playermodewindow.ui
    createcharacterwindow.cpp createcharacterwindow.h createcharacterwindow.ui
    selectcharacterwindow.cpp selectcharacterwindow.h selectcharacterwindow.ui
    mastercontrolwindow.cpp mastercontrolwindow.h mastercontrolwindow.ui
    samosborcontroller.cpp samosborcontroller.h
    terminalprinter.cpp terminalprinter.h
    eventgenerator.cpp eventgenerator.h
    battlecontroller.cpp battlecontroller.h
    initiativetracker.cpp initiativetracker.h
    successcalculator.cpp successcalculator.h
    character_traits.cpp character_traits.h
    character_classes.cpp character_classes.h
    character_skills.cpp character_skills.h
)

# 🔹 Генерация исполняемого файла
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(SamosborGameDnD
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        talenttreewidget.h talenttreewidget.cpp
        talentlogic.h talentlogic.cpp
        talenttreewidget.h talenttreewidget.cpp talenttreewidget.ui
        style.h
        resource.qrc
    )
else()
    if(ANDROID)
        add_library(SamosborGameDnD SHARED ${PROJECT_SOURCES})
    else()
        add_executable(SamosborGameDnD ${PROJECT_SOURCES})
    endif()
endif()

# 🔹 Линковка с Qt
target_link_libraries(SamosborGameDnD PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Core)

# 🔹 Свойства для Windows/Mac
set_target_properties(SamosborGameDnD PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# 🔹 Установка (опционально)
include(GNUInstallDirs)
install(TARGETS SamosborGameDnD
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 🔹 Финализация для Qt6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(SamosborGameDnD)
endif()
