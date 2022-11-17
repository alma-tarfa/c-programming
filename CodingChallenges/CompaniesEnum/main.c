#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO=10, EBAY, MICROSOFT};

    enum company xerox =  XEROX;
    enum company google =  GOOGLE;
    enum company ebay =  EBAY;

    printf("%d\n", xerox);
    printf("%d\n", google);
    printf("%d\n", ebay);

    return 0;
}
