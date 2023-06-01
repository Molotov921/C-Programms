/*wap for basic salary*/
#include<stdio.h>
void main()
{
    float basicSalary,grossSalary,netSalary;
    float hra,ta,da,pf;
    int professionalTax;

    printf("Enter the basic salary : ");
    scanf("%f",&basicSalary);

    hra = 0.1 * basicSalary;
    ta = 0.2 * basicSalary;
    da = 0.3 * basicSalary;

    grossSalary = basicSalary + hra + ta + da;

    pf = 0.2 * basicSalary;
    professionalTax = 200;

    netSalary = grossSalary - pf - 200;

    printf("Gross Salary: %.2f\n",grossSalary);
    printf("Net Salary: %.2f\n",netSalary);
}