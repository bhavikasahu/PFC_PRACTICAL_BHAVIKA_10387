#include <stdio.h>

int main() {
    char name;
    float basicSalary, hra, da, grossSalary, incomeTax, netSalary;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    hra = 0.20 * basicSalary;          
    da = 0.10 * basicSalary;          
    grossSalary = basicSalary + hra + da;
    incomeTax = 0.05 * grossSalary;    
    netSalary = grossSalary - incomeTax;

    printf("\nSalary Details\n");
    printf("Employee Name   : %s\n", name);
    printf("Basic Salary    : %.2f\n", basicSalary);
    printf("HRA (20%%)       : %.2f\n", hra);
    printf("DA (10%%)        : %.2f\n", da);
    printf("Gross Salary    : %.2f\n", grossSalary);
    printf("Income Tax (5%%) : %.2f\n", incomeTax);
    printf("Net Salary      : %.2f\n", netSalary);

    return 0;
}
