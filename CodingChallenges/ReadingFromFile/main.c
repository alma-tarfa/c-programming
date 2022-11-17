#include <stdio.h>
#include <stdlib.h>

int main1()
{
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");

    if (fp == NULL){
        perror("Error in opening file");
        return(-1);
    }

    //read a single char
    while((c = fgetc(fp)) !=EOF){
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;

    system("pause");
    return(0);

}
