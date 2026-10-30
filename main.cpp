#include <iostream>
#include <ctime>
#include "promptUser.h"
#include "displayCalendar.h"
#include "displayCalendarMonth.h"

int main() {


    do {
        displayCalendar(promptUserRange("entrer une valeur [1800 - 2100] : ", "/!\\ erreur de saisie", 1800, 2100));
    }while (promptUserYN("voulez-vous continuer [O|N] : "));

    return EXIT_SUCCESS;
}
