# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Check if environment variable QTDIR is set.
# Extra security for windows environment as well.
if (DEFINED ENV{QTDIR})
    set(CMAKE_PREFIX_PATH $ENV{QTDIR} ${CMAKE_PREFIX_PATH})
else ()
    message (WARNING "WARNING: Environment variable QTDIR is not set. Please locate your Qt folder MY_QT5_DIR.")
endif ()

# Find the QtWidgets library
find_package(Qt5Widgets)

set(SRC_LIST main.cpp )
set(SRC_LIST ${SRC_LIST} kcpluginmanager.cpp )

#set(RESOURCE_LIST )
#qt5_add_resources(RESOURCES_RCC rc.qrc)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

if(WIN32)
#    set(SRC_LIST ${SRC_LIST} winico.rc )
    add_executable(${PROJECT_NAME} WIN32 ${SRC_LIST} ${RESOURCES_RCC})
else(WIN32)
    add_executable(${PROJECT_NAME} ${SRC_LIST} ${RESOURCES_RCC})
endif(WIN32)

# Use the Widgets module from Qt 5.
qt5_use_modules(${PROJECT_NAME} Widgets Network)

#install
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${PROJECT_NAME})
