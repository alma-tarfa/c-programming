#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int minutes=0;
    double minutesInYear = 525600;
    double minutesInDay = 1440;
    double years;
    double days = 0;

    //Get user input
    printf("Enter minutes : ");
    scanf("%d", &minutes);

    printf("Minutes is %d.\n", minutes);

    //Comparisons and calcutations
    years = minutes/ minutesInYear;
    days = minutes/minutesInDay;

    printf("There are %.4f years and %.4f days in %i minutes.\n", years, days, minutes);

    return 0;
}
