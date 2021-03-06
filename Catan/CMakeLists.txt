cmake_minimum_required(VERSION 3.5)

project(Catan VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check https://doc.qt.io/qt/deployment-android.html for more information.
# They need to be set before the find_package( ...) calls below.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
find_package(Qt6 COMPONENTS Network REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        tiles.h
        tiles.cpp
        resourcetile.h
        resourcetile.cpp
        seatile.h
        seatile.cpp
        deserttile.h
        deserttile.cpp
        map.h
        map.cpp
        card.h
        card.cpp
        development.h
        development.cpp  
        resource.h
        resource.cpp
        wheat.h
        wheat.cpp
        wood.h
        wood.cpp
        sheep.h
        sheep.cpp
        rock.h
        rock.cpp
        knight.h
        knight.cpp
        advance.h
        advance.cpp
        point.h
        point.cpp
        roadBuild.h
        roadBuild.cpp
        extraResource.h
        extraResource.cpp
        exclusion.h
        exclusion.cpp
        thief.h
        thief.cpp
        piece.h
        piece.cpp
        road.h
        road.cpp
        city.h
        city.cpp
        settlement.h
        settlement.cpp
        bridge.h
        bridge.cpp
        brick.h
        brick.cpp
        dice.h
        dice.cpp
        player.h
        player.cpp
        clientsocket.h
        clientsocket.cpp
        Sea.qrc
        match.h
        match.cpp
        initial.cpp
        initial.h
        initial.ui
        ini.qrc
        name.cpp
        name.h
        name.qrc
        name.ui
        waiting.cpp
        wait.qrc
        waiting.h
        waiting.ui
        help.cpp
        help.h
        help.qrc
        help.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Catan
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(Catan SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Catan
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Catan PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Catan PRIVATE Qt6::Network)

set_target_properties(Catan PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Catan)
endif()
