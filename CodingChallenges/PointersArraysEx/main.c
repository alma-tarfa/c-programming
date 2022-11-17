#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char multiple[] = "a string";
    char *p = multiple;

    printf("----------------------------------------------------------\n\n");
    for (int i =0; i < strlen(multiple); ++i){
        printf("multiple[%d]=%c *(p+%d) = %c &multiple[%d]= %p p+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    }


    printf("----------------------------------------------------------\n\n");
    printf("\t\t\LONGS\t\t\n");

    long multiple1[] = {15L, 25L, 35L, 45L};
    long *p1 = multiple1;

     for (int i =0; i < sizeof(multiple1)/sizeof(multiple1[0]); ++i){
        printf("Address p+%d (&multiple[%d]): %llu  *(p+%d) value : %d\n", i, i, (unsigned long long)(p1+i), i, *(p1+i));
    }
    printf("\n Type long occupies: %d bytes \n", (int)(sizeof(long)));

    return 0;
}
