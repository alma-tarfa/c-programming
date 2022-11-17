#include <stdio.h>

int main2 (){
 FILE *fp;

 char str[61];

 /*****Opening a file for reading *****/
 fp = fopen("file.txt", "r");

 if (fp == NULL){
    perror("Error opening file");
    return(-1);

 }

 if (fgets(str, 10, fp) != NULL){
    /**Writing content to stdout**/
    printf("%s", str);
 }
 fclose(fp);
 fp = NULL;
 return(0);

}
