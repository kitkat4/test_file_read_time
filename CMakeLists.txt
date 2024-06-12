cmake_minimum_required(VERSION 3.22)

project(test_file_read_time)

add_compile_options(-Wall -O2)

include_directories(include)

add_executable(test_file_read_time
  src/test_file_read_time.cpp
)

