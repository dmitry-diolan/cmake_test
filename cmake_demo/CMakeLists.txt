add_subdirectory ("static_lib")
add_subdirectory ("executable")

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
add_subdirectory (c_sharp)
endif()