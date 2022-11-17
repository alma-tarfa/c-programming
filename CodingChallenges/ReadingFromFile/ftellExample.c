

#include <stdio.h>
#include <stdlib.h>

int main5()
{
    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "w+");

    if (fp == NULL){
        perror("Error opening file");
        return(-1);
    }
    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total size of file.txt = %d bytes\n", len);
    fp = NULL;

    return(0);

}
