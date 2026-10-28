#include <iostream>
#include <ctime>
#include "promptUser.h"
#include "displayCalendar.h"
#include "displayCalendarMonth.h"

int main() {
    do {
        displayCalendar(promptUserRange("entrer une valeur [1800 - 2100] : ", "/!\\ erreur de saisie", 1800, 2100));
    }while (promptUserYN("voulez-vous continuer [O|N] : "));



    // Source - https://stackoverflow.com/a/19111202
    // Posted by James Kanze
    // Retrieved 2026-10-28, License - CC BY-SA 3.0

    int year = 2027;

    std::cout << (1 + (year % 100 + year % 100 / 4 ) + 1 -(2000<year &&year<2099))%7;


    return EXIT_SUCCESS;
}
