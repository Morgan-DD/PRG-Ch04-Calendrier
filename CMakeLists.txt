cmake_minimum_required(VERSION 4.3)
project(PRG_Ch04_Calendrier)

set(CMAKE_CXX_STANDARD 20)

add_executable(PRG_Ch04_Calendrier main.cpp
        promptUser.cpp
        promptUser.h
        displayCalendar.h
        displayCalendar.cpp
        displayCalendarMonth.h
        displayCalendarMonth.cpp)
