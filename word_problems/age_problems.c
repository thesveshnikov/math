#include "age_problems.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_birthday(int *mday, int *mon, int *year, int current_year) {
    do {
        printf("Enter the birth's day: ");
        scanf("%d", mday);
    } while (*mday < 1 || *mday > 31);

    do {
        printf("Enter the birth's month: ");
        scanf("%d", mon);
    } while (*mon < 1 || *mon > 12);

    do {
        printf("Enter the birth year: ");
        scanf("%d", year);
    } while (*year < 0 || *year > current_year);
}

void age_problems(void) {
    int mday, mon, year;

    time_t now = time(NULL);
    struct tm *current = localtime(&now);
    int current_year = current->tm_year + 1900;

    get_birthday(&mday, &mon, &year, current_year);

    struct tm birthdate = {0};
    birthdate.tm_mday = mday;
    birthdate.tm_mon = mon - 1;
    birthdate.tm_year = year - 1900;

    int age = current->tm_year - birthdate.tm_year;
    if (current->tm_mon < birthdate.tm_mon ||
       (current->tm_mon == birthdate.tm_mon && current->tm_mday < birthdate.tm_mday)) {
        age--;
       }

    printf("Age: %d\n", age);
}