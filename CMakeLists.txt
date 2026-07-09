# Minimum CMake version required for this project
cmake_minimum_required(VERSION 4.0)

# Name of the project and the languages it uses
project(moderncpp LANGUAGES CXX)

# Use C++20 as the language standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Generate compile_commands.json so editors can resolve includes correctly
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Allow CMake to fetch external dependencies
include(FetchContent)

# Declare GoogleTest as an external dependency to download
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Make the declared dependency available to the build
FetchContent_MakeAvailable(googletest)

# Create the library target for the greeting implementation
add_library(moderncpp_lib
    src/greeting.cpp
)

# Make the include directory available to code that links against the library
target_include_directories(moderncpp_lib PUBLIC
    include
)

# Create the main executable
add_executable(main
    src/main.cpp
)

# Link the main executable against the library
target_link_libraries(main PRIVATE
    moderncpp_lib
)

# Enable testing support with CTest
enable_testing()

# Create the test executable
add_executable(main_tests
    tests/main_tests.cpp
)

# Link tests against the library and GoogleTest main entry point
target_link_libraries(main_tests PRIVATE
    moderncpp_lib
    GTest::gtest_main
)

# Include GoogleTest helpers and register the tests with CTest
include(GoogleTest)
gtest_discover_tests(main_tests)