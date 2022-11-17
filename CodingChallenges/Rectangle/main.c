/*
    Author: Me
    Purpose: This program is going to calculate the area of a rectangle
*/

#include <stdio.h>
#include <stdlib.h>

int main(
{
    //declaring variables
    double height = 12;
    double width = 6.6;

    double perimeter= 0.0;
    double area = 0.0;

    perimeter = 2.0* (height + width);
    area = width * height;

    //printing values
    printf("The height of the rectangle is %.2f\n", height);
    printf("The width of the rectangle is %.2f\n", width);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);
    printf("The area of the rectangle is %.2f\n", area);

    return 0;
}
