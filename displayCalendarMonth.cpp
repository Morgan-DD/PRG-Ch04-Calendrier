//
// Created by Jib on 28.10.2026.
//
#include <iostream>
#include <ostream>
#include <iomanip>
#include "displayCalendarMonth.h"

int displayCalendarMonth(int nbDays, int dayOfTheWeek) {
    std::cout << " L  M  M  J  V  S  D" << std::endl;
    int i;
    std::cout << std::setw((dayOfTheWeek-1)*3-1) << "";
    for ( i = 1; i <= nbDays; i++) {
        if (((dayOfTheWeek+(i%7)-1)%7)!=1){std::cout << std::setw(3) << i;}
        else {std::cout << std::setw(2) << i;}

        if (!((dayOfTheWeek+i-1)%7)){ std::cout << std::endl;}
    }
    std::cout << std::endl << std::endl;
    return (dayOfTheWeek+(i%7))%7;
}