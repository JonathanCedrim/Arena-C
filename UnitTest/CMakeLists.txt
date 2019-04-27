cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(testSqrt sqrt_test.cpp)
add_executable(testArrayList ArrayList_test.cpp)

target_link_libraries(testSqrt ${GTEST_LIBRARIES} pthread)
target_link_libraries(testArrayList ${GTEST_LIBRARIES} pthread)


