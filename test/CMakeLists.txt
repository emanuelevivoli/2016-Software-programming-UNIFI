cmake_minimum_required(VERSION 3.4)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp MatrixTests.cpp OperatorTests.cpp)
add_executable(runMatrixTemplateTests ${TEST_SOURCE_FILES})
target_link_libraries(runMatrixTemplateTests gtest gtest_main)