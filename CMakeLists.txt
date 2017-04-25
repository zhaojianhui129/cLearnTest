cmake_minimum_required(VERSION 3.6)
project(cLearnTest)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c 006-review/10-question.c 006-review/11-question.c 006-review/12-question.c 006-review/13-question.c)
add_executable(cLearnTest ${SOURCE_FILES})