cmake_minimum_required(VERSION 3.10)
project(Iris)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find the SQLite3 library
# find_package(SQLite3 REQUIRED)

# Add the include directories
include_directories("/usr/include")

# Add the executable
add_executable(Iris main.cpp)

# Link SQLite3 libraries
# target_link_libraries(soccer PRIVATE SQLite::SQLite3 "/usr/lib/x86_64-linux-gnu/libtinyxml2.so")
