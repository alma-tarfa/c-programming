#include <stdio.h>
#include <stdlib.h>


#define MONTHS 12
#define YEARS 5

int main()
{
    int a;
    int b;
    double rainfall[YEARS][MONTHS] = {
    {35.58, 48.96, 39.68, 34.23, 22.22, 23.56, 45.12, 36.1, 14.25,39.68, 34.23, 22.22},
    {32.87, 34.37, 29.9, 28.14, 39.24, 28.94, 47.17, 39.94, 40.46, 44, 37.97, 35.5},
    {32.05, 33.9, 41.47, 43.05, 34.66, 40.05, 34.66, 40.05, 42.65, 28.7, 37.1, 37.1},
    {36.85, 34.79, 34.59, 34.25, 29.98, 30.90, 35.91, 34.15, 40.7, 35.3, 35.3, 35.3},
    {36.07, 31.62, 38.44, 28.75, 44.17, 44.41, 43.39, 42.00, 27.82,29.47, 37.1, 28.7}
    };
    double yearlyRainfall[YEARS][2] = {
        {2010, 0},
        {2011, 0},
        {2012, 0},
        {2013, 0},
        {2014, 0}
    };
    float monthlyAverages[2][MONTHS]={
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    float sum = 0.0;

    for (a = 0; a<YEARS; a++){
        float temp = 0.0;
        for (b=0; b<MONTHS; b++){
            temp += rainfall[a][b];
        }
        yearlyRainfall[a][1] = temp;
        sum += temp;
    }


    for (b=0; b <MONTHS; b ++){
        float tempMonth = 0.0;
        for (a = 0; a < YEARS; a++){
            tempMonth += rainfall[a][b];
        }
        monthlyAverages[1][b] = tempMonth;
    }
    printf("YEAR \t RAINFALL (inches)\n");
    for (int i = 0; i < YEARS ; i ++){
        printf("%0.f \t %0.2f\n", yearlyRainfall[i][0], yearlyRainfall[i][1] );
    }

     printf("\n\nThe yearly average is %0.f.\n", sum/YEARS);

    printf("\n\nMONTHLY AVERAGES:\n");
    printf("Jan \tFeb \tMar \tApr \tMay \tJun \tJul \tAug \tSep \tOct \tNov \tDec\n");
    for (int j = 0; j < MONTHS ; j ++){
        printf("%0.2f\t", monthlyAverages[1][j]);
    }
    printf("\n");

    return 0;
}
