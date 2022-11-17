
#include <stdio.h>
#include <stdlib.h>

int main4()
{
    FILE *fp = NULL;
    int c;

    fp = fopen("file1.txt", "w+");

    if (fp != NULL)
        fprintf(fp, "%s %s %s %s %d", "Hello","my", "number", "is", 555);

    fclose(fp);
    fp = NULL;

    return(0);

}
