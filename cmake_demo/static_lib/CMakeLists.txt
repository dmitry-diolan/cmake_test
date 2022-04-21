

add_library(static_lib STATIC
	src/SomeClass.cpp
)

target_include_directories(static_lib 
	  PUBLIC inc
)

add_library(dynamic_lib SHARED
	src/SomeClass.cpp
)

target_include_directories(dynamic_lib 
	  PUBLIC inc
)

#target_include_directories(static_lib PUBLIC
#	  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
#)