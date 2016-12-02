#Use system version and name it whatever you want.
cmake_minimum_required(VERSION 3.6.2)
project(project_name_here)

#For a shared library:
#set (PROJECT_LINK_LIBS libtestStudent.so)
#link_directories(~/exploringBB/extras/cmake/studentlib_shared/build)

#For a static library:
#set (PROJECT_LINK_LIBS libtestStudent.a)
#link_directories(~/exploringBB/extras/cmake/studentlib_static/build)

#Add the headers, like .h or .hpp into the project
include_directories(include)

#You can manually add sources using the command below:
#set(SOURCES src/main.cpp)

#However, the file (GLOB...) allows for wildcard additions:
#This allows us to automatically use all .cpp files in the src directory
file(GLOB SOURCES "src/*.cpp")

#Creates the executable file that you run
add_executable(${PROJECT_NAME} ${SOURCES})

#Important when adding libraries to glue everything together
#target_link_libraries(${PROJECT_NAME} ${PROJECT_LINK_LIBS})

