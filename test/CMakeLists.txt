cmake_minimum_required(VERSION 3.12)
project(MyProject)

# Download Catch2
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.4.0
)
FetchContent_MakeAvailable(Catch2)


add_executable(tests test.cpp)

# Set the include directories
target_include_directories(tests PRIVATE ../src)  # Include ../src directory

# Add the .cpp files in ../src
file(GLOB SRC_FILES ../src/*.cpp)
target_sources(tests PRIVATE ${SRC_FILES})

# Add the test executable

# Link Catch2 to the test executable
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)


# Add Catch2 to the include path
target_include_directories(tests PRIVATE ${Catch2_SOURCE_DIR})




