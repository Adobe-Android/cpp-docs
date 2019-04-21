# CMakeList.txt : CMake project for CMakeDemoProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(fmt REQUIRED)

# Add source to this project's executable.
add_executable (CMakeDemoProject "CMakeDemoProject.cpp" "CMakeDemoProject.h")

target_link_libraries(CMakeDemoProject PRIVATE fmt::fmt)

# TODO: Add tests and install targets if needed.
