#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str= NULL;
    int num = 0;

    printf("Enter a length : ");
    scanf("%d", &num);

    str = (char *) malloc(num*sizeof(char));

    if(str != NULL){
        printf("Enter some text : ");
        scanf(" ");
        gets(str);

        printf("Inputted values is %s\n", str);
    }

    free(str);
    str = NULL;

    return 0;
}
