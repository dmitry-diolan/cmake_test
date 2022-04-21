# CMakeList.txt : CMake project for CMakeVS2022Test, include source and define
# project specific logic here.
#


# Add source to this project's executable.
add_executable (executable 
	"src/Main.cpp" 
	"src/LocalFunction.cpp" 
	"src/LocalFunction.h"
)

target_link_libraries(executable
	PRIVATE static_lib
)

# TODO: Add tests and install targets if needed.
