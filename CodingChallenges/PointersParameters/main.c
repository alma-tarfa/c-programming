#include <stdio.h>
#include <stdlib.h>

void square( int * const x);
//int *squareNum( int * x);
int main()
{
    int x = 12;
    int *num = (int *)malloc(sizeof(int));
    *num = 4;
    square(&x);
    square(num);


    printf("Square of given number is %d\n", x);
    printf("Square of given number is %d\n", *num);
    //printf("Square of %d is %d\n", x, (int)*(squareNum(&x)));
    return 0;
}
//int *squareNum( int const * x){
void square( int * const x){

    *x = (*x)*(*x);

   /* int val = (*x)*(*x);
    int * square = &val;

    return square;*/
}

