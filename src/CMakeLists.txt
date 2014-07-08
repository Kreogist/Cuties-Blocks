cmake_minimum_required(VERSION 2.8.9)

#Set SDK directory
include_directories("sdk")

add_subdirectory(core)
add_subdirectory(plugins)
add_subdirectory(resources)
add_subdirectory(tweak)
add_subdirectory(tools)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif()