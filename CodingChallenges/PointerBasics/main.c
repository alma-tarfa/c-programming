#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 30;
    int *pnum = &num;


    printf("Address of the number : %p\n",&num);
    printf("Address of the pointer : %p\n",&pnum);
    printf("Value of the pointer : %p\n", pnum);
    printf("value pointed to : %d\n", *pnum);
    return 0;
}
