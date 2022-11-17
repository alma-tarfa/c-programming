/*
Author: 
Purpose: This program prints out my name to the screen
Date: 

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void add();
int arraySum(int array[], const int n);
int arraySum(int array[], const int n)
{

    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    // for (ptr = &array[0]; ptr < arrayEnd; ++ptr)
    for (ptr = array; ptr < arrayEnd; ++ptr)
    {
        sum += *ptr;
    }
    return sum;
}
struct date
{
    /* data */
    int month;
    int day;
    int year;
};
struct intPtrs
{
    /* data */
    int *p1;
    int *p2;
};
struct namect
{
    /* data */
    char * fname;
    char * lname;
    int letters;
};
/*void getInfo( struct namect * pst){
    int SLEN = 0;
    char temp[SLEN];
    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);

    //alocate memory to hold name 
    pst->fname = (char *) malloc(strlen(temp) +1);

    //copy name to allocated memory
    strcpy(pst-> fname, temp);
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);

    pst->lname = (char *)malloc(strlen(temp)+1);
    strcpy(pst -> lname, temp);
}*/

int main(int argc, char *argv[])
{
    /*********STRUCTURES AND POINTERS***************/

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i / %i / %.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);

    //Pointers to structs 

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);
    /***************POINTER ARITHMETIC************/
    /* int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum is %i\n", arraySum(values, 10));*/

    /***************POINTERS*******************/
    /*   int number = 0; // a varaiable of type int initialized to 0
    int *pnumber = NULL; //A pointer taht can point to type int

    number = 10;
    printf("number's address: %p\n", &number); //output the address
    printf("number's value: %d\n\n", number); //Output the value

    pnumber = &number;

    printf("pnumber's address: %p\n", (void*)&pnumber);// output the address
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber));//Output the size
    printf("pnumber's value: %p\n", pnumber);//Output the value (an address)
    printf("value pointed to: %d\n", *pnumber); //Value at the address 

*/

    /************STRINGS***********************/
    /* char str[80] = "Hello how are you - my name is - Jane";
    const char s[3] = "-";
    char *token;

    //get the first token 
    token = strtok(str, s);
    //printf( "%s\n", token);
    //walk through other tokens 
    while (token != NULL){
        printf( "%s\n", token);
        printf( " strtok %s\n", strtok(NULL, s));
        printf( " strtok %s\n", strtok(str, s));
        token = strtok(NULL, s);
        
    }*/

    /*   printf("strcmp (\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp (\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp (\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp (\"apples\", \"apples\") is ");
    printf("%d\n", strcmp("apples", "apple"));*/
    /*char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("Final destination string : |%s|", dest);*/

    /*  char myString[] = "My Name is Jason";

    char temp[50];
    strncpy(temp, myString, sizeof(temp)-1);

    printf("The string is: %s", temp);
    printf("The length is: %d", strlen(myString));*/

    /*********FUNCTIONS ***********************/
    // add ();

    /********MULTIDIMENSIONAL ARRAYS***********/
    /*   int numbers[3][4] = {
        {10, 20, 30, 40 },
        {10, 20, 30, 40 },
        {47, 48, 49, 50}
    }
    */
    /********ARRAYS***********/
    /* int counters[5] = {0, 0, 0, 0, 0};
    int intergers[5] = {1, 2, 3, 4, 5};
    float sample_date[500] = {100.0, 300.0, 500.5};//the rest of the 497 values are 0 
    */
    /*int grades[10];                     //Arry toring 10 values
    int count = 10;                     //Number if values to be read
    long sum = 0;                       //sum of the numbers 
    float average = 0.0f;               //Average of the numbers

    printf("\nEnter the 10 gardes: \n"); //prompt for user Input 

    // Read in 10 numbers to be averaged
    int i; 
    for (i =0; i < count ; ++i){
        printf("%2u> ", i +1);
        scanf("%d", &grades[i]);        //read a grade
        sum += grades[i];               //Add it to sum 
    }
    average = (float) sum/count;        //average

    printf("\nAverage of the ten grades eneterd is: %.2f\n", average);
    */

    /*******FOR LOOP*************/
    /*unsigned long long sum = 0LL; //stores the sum of the integers 
    unsigned int count = 0; //The number of integers to be summed

    //Reda the number of integers to be summed 
    printf("\nEnter the number of integers you want to sum: ");
    scanf("%u", &count);

    //sum integers from 1 to count 
   /* for (unsigned int i = 1; i <= count ; i++){
        printf("Inside loop");
        sum +=i;
    }*/
    /*  for (unsigned int i = 1; i <= count ;  sum +=i++);

    printf("\nTotal of the first %u numbers is %llu\n",count, sum);*/

    ///
    /********SWITCH CASE ******/
    /*  enum Weekday
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    enum Weekday today = Saturday;

    switch (today)
    {
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break;
        case Tuesday:
            printf("Today is Tuesday\n");
            break;
        default:
            printf("Whatever");
            break;
    }*/

    /*******IF ELSE STATEMENTS*****/
    /*  int number, sign;

    printf("Please type in a number :");
    scanf ("%i", &number);

    if(number <0){
        sign = -1;
    }else if(number ==0){
        sign =0;
    }else {
        sign =1;
    }
    printf("Sign = %i\n", sign);*/

    /****IF STATEMENTS *****/
    /* int number_to_test, remainder;

    printf("Enter your number to be tested : ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");*/

    /*****CAST AND SIZE OF OPERATORS*****/

    /****BITWISE OPERATORS******/
    /*unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;

    //result = a & b;// 0000 1100
   // result = a | b;// 0011 1101
    //result = a ^ b;// 0011 0001
    result = ~a;// 1100 0011
    printf("%d", result);*/

    /******LOGICAL OPERATORS*****/
    /* bool a = true;
    bool b = 0;
    _Bool result;

    result = !b;
    printf("%d", result);*/

    /****OPERATORS****/
    /*  int a = 33;
    int b = 15;
    int result = 0;
    result = a % b;

    printf("Result is %d\n", --a);*/

    /******************COMMAND LINE ARGUMENTS*********/
    /*  int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Argumnets: %d\n", numberOfArguments);
    printf("Argument 1 is the program name : %s\n", argument1);
    printf("Argument 2 is the command line argument : %s\n", argument2);*/

    /*******VARIABLES AND DATA TYPES *****************/
    /*  int intergerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar = %i\n", intergerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);


    float x = 3.99992323232;
    printf("%.5f", x);
    */
    //ENUMS
    /* enum gender
    {
        male,
        female
    };
    enum gender myGender;
    enum gender anotherGender = female;
    myGender = male;

    bool isMale = (myGender == anotherGender);
    char myCharacter = '\n';
    printf("%c", myCharacter);
*/
    //BASIC DATA TYPES
    /*int jane = 5;
    jane = 8;

    int intergerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;

    bool boolVar = 0;*/

    /********READING INPUT FROM THE TERMINAL*********/
    /*char str[100];
    int i;
    double x;

    /*
    *for an interger is %d
    *for a string is %s
    *for a double is %lf
    */
    /*
    printf("Enter a value : ");
    scanf("%d %s %lf", &i, str, &x);
    printf("\nYou entered: %d:::::%s::::%lf\n", i, str, x);
    */
    return 0;
}
void add()
{
}