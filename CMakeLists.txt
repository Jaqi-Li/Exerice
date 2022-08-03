cmake_minimum_required(VERSION 3.22)
project(Exerice C)

set(CMAKE_C_STANDARD 90)
add_executable(Exerice main.c
        inc/EXE_practice.h
        inc/EXE_fibonacci.h
        inc/EXE_letcode.h
        inc/EXE_pointer.h
        inc/EXE_sort.h
        inc/EXE_util.h
        src/EXE_util.c
        src/EXE_practice.c
        src/EXE_fibonacci.c
        src/EXE_letcode.c
        src/EXE_pointer.c
        src/EXE_sort.c
        inc/EXE_fish.h src/EXE_fish.c inc/EXE_search.h src/EXE_search.c)
