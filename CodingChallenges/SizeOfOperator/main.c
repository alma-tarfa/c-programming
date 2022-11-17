#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Int is %zd\n", sizeof(int));
    printf("Char is %zd\n", sizeof(char));
    printf("Long is %zd\n", sizeof(long));
    printf("Float is %zd\n", sizeof(float));
    printf("Long long is %zd\n", sizeof(long long));
    printf("Double is %zd\n", sizeof(double));
    printf("Long Double is %zd\n", sizeof(long double));

    return 0;
}
