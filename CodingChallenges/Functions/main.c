#include <stdio.h>
#include <stdlib.h>

int gdc(int x, int y);
float absoluteValue(float z);
float squareRoot(float c);
int main()
{
    int result = 0;
    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is  % d\n", result);


    float a = -2.63;
    int b = -24;
    float c = 49.00;

    printf("Greatest Common Divisor is %d\n", gdc(24, 18));

    printf("Absoulte value of %f is %f\n", a, absoluteValue(a));
    printf("Absoulte value of %d is %d\n", b, (int)absoluteValue(b));
    printf("Square root of %.2f is %.2f\n", c, squareRoot(c));
    return 0;
}
int gcd (int u, int v){
    int temp;

    while (v != 0){
        temp = u % v;
        u =v;
        v = temp;
    }
    return u;
}

/*int gdc (int x, int y){
    int gdcValue = 0;
    if (x > 0 && y >0){
        for (int i = 1; i <= x && i <= y; i++){
            if (x%i == 0 && y%i ==0){
                gdcValue = i;
            }
        }
    }

    return gdcValue;
}*/
float absoluteValue(float z){
    if (z <0 ){
        z *=-1;
    }
    return z;
}
float squareRoot(float c){

    if(c >= 0){
        if((c == 0 || c == 1)){
            return c;
        }
        float result = 0.0;
        int i = 1;
        for (i = 1; result <= c; i++){
            result = i*i;
        }
        return (float)i;

    }else {
        printf("A negative argument was passed in\n");
        return -1;
    }
}
