#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40
int main()
{
    //declare variables
    int hoursWorked=0;
    double grossPay = 0.0;
    double totalTaxes = 0.0;
    double netPay= 0.0;

    printf("Enter number of hours worked: ");
    scanf("%d", &hoursWorked);

    if(hoursWorked <= OVERTIME ){
        grossPay = hoursWorked * PAYRATE;
    }else {
        grossPay = OVERTIME * PAYRATE;
        double overTimePay = (hoursWorked-OVERTIME) * (PAYRATE*1.5);
    }


    if (grossPay > 450){
        totalTaxes += (300 *TAXRATE_300);
        totalTaxes += (150 * TAXRATE_150);
        totalTaxes += (grossPay-450)* TAXRATE_REST ;
    }
    else if(grossPay > 300 && grossPay <450)
    {
        totalTaxes += 300 * TAXRATE_300;
        totalTaxes += (grossPay - 300 ) * TAXRATE_150;
    }
    else if(grossPay < 300 )
    {
        totalTaxes += 300 * TAXRATE_300;
    }
    netPay = grossPay - totalTaxes;

    printf("\nGross pay is %.2f\n", grossPay);
    printf("Total taxes is %.2f\n", totalTaxes);
    printf("Net pay is %.2f\n", netPay);

    return 0;
}
