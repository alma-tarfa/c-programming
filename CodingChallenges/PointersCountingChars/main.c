#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int charLength(const char *p);
int main(void)
{
   // char str[30] = "A string some Extra words";
    //char *p = str;

    printf("\nSize of string array is %d\n", (int)charLength("A string some Extra words"));
    return 0;
}
int charLength(const char *p){

    const char *lastAddress = p;

    while (*lastAddress)
    {
        ++lastAddress;
    }

    return lastAddress - p;
}
//printf("Value: %c Address PLen: %p Address of Value: %p\n",(char) *(pLen), &pLen, pLen);
    // printf("Value: %c Address P: %p Address of Value: %p\n", (char) *(p), &p, p);
