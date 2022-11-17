#include <stdio.h>
#include <stdlib.h>
struct employee {
    char name[20];
    char hireDate[15];
    float salary;
};
int main()
{
    struct employee emp = {"Jane", "24/02/2020", 30000.00};
    struct employee emp1;

    printf("\n\n%s was hired on the %s and earns %.2f", emp.name, emp.hireDate, emp.salary);

    printf("\n\nEnter new employee's name : ");
    scanf("%s", emp1.name);

    printf("\nEnter new employee's hire date : ");
    scanf("%s", emp1.hireDate);

    printf("\nEnter new employee's salary : ");
    scanf("%f", &emp1.salary);

    printf("\n\n%s was hired on the %s and earns %.2f", emp1.name, emp1.hireDate, emp1.salary);

    return 0;
}
