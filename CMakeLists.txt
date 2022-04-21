# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

include(cmake/first_script.cmake)


test_context()

set(CXX_STANDARD_REQUIRED ON) # Make c++20 a hard requirement
set(CMAKE_CXX_STANDARD 20) #Default c++ standard fro targets

project ("cmake_demo"
	VERSION 1.0
	DESCRIPTION "An attemp to build different kinds or projects using cmake"
)

# %{CMAKE_CURRENT_SOURCE_DIR}
#project ("CMakeVS2022Test"
#	VERSION 1.0
#	DESCRIPTION "An attemp to build different kinds or projects using cmake"
#	LANGUAGES C, CXX, CSharp
#)

# Include sub-projects.
add_subdirectory("cmake_demo")

