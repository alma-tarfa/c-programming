#include <stdio.h>
#include <stdlib.h>

int main6()
{
    FILE *fp;
    char c;
    int lines = 0;

    fp = fopen("file1.txt", "r");

    if (fp == NULL){
        perror("Error in opening file");
        return(-1);
    }

    //read a single char
    while((c = fgetc(fp)) !=EOF){
        if( c == '\n'){
            ++lines;
        }

       // printf("%d", lines);
    }

    printf("The number of lines in file.txt is %d\n", lines ==0? lines : ++lines);

    fclose(fp);
    fp = NULL;

    //system("pause");
    return(0);

}


