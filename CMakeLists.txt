cmake_minimum_required(VERSION 3.15)
project(Guacalibc C)

set(CMAKE_C_STANDARD 11)


set(INCLUDE_SOURCES include/str.h)

set(STR_SOURCES src/str/strlen.c
        )


add_library(Guacalibc SHARED)