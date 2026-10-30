#include <iostream>
#include <ostream>
#include <ctime>
#include <iomanip>
#include "displayCalendarMonth.h"
//
// Created by Jib on 28.10.2026.
//
void displayCalendar(int year) {
    const std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    bool bissextile = year % 4 == 0 && year % 100 == 0 && year % 400 == 0;

    int day = 1; // 1er du mois
    int month = 13; // code du mois de janvier utilisé dans l'algorythme de Zeller
    int dayOfTheWeek = (day + ((13*(month+1))/5) + (year-1)%100 + ((year-1)%100)/4 + (year/100)/4 + 2*(year/100))%7;

    for (int i = 1; i <= 12; i++) {
        std::cout << months[i-1] << " " << year << std::endl;
        if (i == 2) {
            if (bissextile){ dayOfTheWeek=displayCalendarMonth(28, dayOfTheWeek); }
            else { dayOfTheWeek=displayCalendarMonth(29, dayOfTheWeek); }

        }else if (i%2) {
            dayOfTheWeek=displayCalendarMonth(31, dayOfTheWeek);
        }else {
            dayOfTheWeek=displayCalendarMonth(30, dayOfTheWeek);
        }
    }

}