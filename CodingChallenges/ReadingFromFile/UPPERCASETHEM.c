
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main7()
{
    FILE *fp = NULL;
    FILE *fpTemp = NULL;
    char c = ' ';
    char filename[] = "file.txt";
    char filenameTemp[] = "fileTemp.txt";

    fp = fopen(filename, "r");

    if (fp == NULL){
        perror("Error in opening file");
        return(-1);
    }

    fpTemp = fopen(filenameTemp, "w");


    if (fpTemp == NULL){
        perror("Error in opening file");
        return(-1);
    }

    //read a single char
    while((c = fgetc(fp)) !=EOF){
        if(islower(c) != 0){
            fputc(c -32, fpTemp);
        }else {
            fputc(c , fpTemp);
        }

       // printf("%d", lines);
    }

    fclose(fp);
    fclose(fpTemp);

    remove(filename);
    rename(filenameTemp, filename);
    remove(filenameTemp);

     fp = fopen(filename, "r");
    if (fp == NULL){
        perror("Error in opening file");
        return(-1);
    }

   while((c = fgetc(fp)) !=EOF){
        printf("%c", c);
   }

   fclose(fp);
    fp = NULL;
    fpTemp = NULL;
    return(0);

}


