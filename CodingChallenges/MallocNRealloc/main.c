#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str =NULL;

    /** Initial Memory allocation */
    str = (char *) malloc(15, sizeof(char));
    strcpy(str, "jason");
    printf("String = %s, Address = %p\n", str, str);

    /**Reallocating Memory */
    str = (char *)realloc (str, 25);
    strcat(str, ".com");

    printf("string =%s, Address = %p\n", str, str);

    free(str);
    return 0;
}
