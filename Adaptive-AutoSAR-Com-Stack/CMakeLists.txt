#Requirements and Dependencies

# cmake_minimum_required(VERSION 3.27.0)
# cmake_minimum_required(VERSION 3.0)
cmake_minimum_required(VERSION 3.28.1)
project(adaptive_autosar)


# Fetching GoogleTest 1.14.0 for unit testing
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/58d77fa8070e8cec2dc1ed015d66b454c8d78850.zip
# )


# Source Directories:

set(source_dir
  "${CMAKE_SOURCE_DIR}/src")

set(source_ara_core_dir
  "${CMAKE_SOURCE_DIR}/src/ara/core")

  set(source_ara_exec_dir
  "${CMAKE_SOURCE_DIR}/src/ara/exec")


# Test Directories:

set(test_ara_core_dir
  "${CMAKE_SOURCE_DIR}/test/ara/core/sqrt")


set(test_ara_exec_dir
  "${CMAKE_SOURCE_DIR}/test/ara/exec")



# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


# Link runTests with what we want to test and the GTest and pthread library
add_executable(test_ara_core_dir 
          ${test_ara_core_dir}/sqrt_test.cpp)

target_link_libraries(test_ara_core_dir ${GTEST_LIBRARIES} pthread)


add_executable(adaptive_autosar
                # ${source_dir}/app.cpp
                ${test_ara_core_dir}/sqrt.cpp)
