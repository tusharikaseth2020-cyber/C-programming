/*
WAP  to take values of basic salary from a user and compute the income salary and net salary of the employee on the basis of following conditions
HRA - 30% of basic
DA - 20%of basic
insentive- rs7000
loan repay- rs 14000
income tax reduction -10%basic
*/
#include <stdio.h>

int main()
{
    float basic, hra, da, insentive, loan_repay, income_tax, gross_salary, net_salary;
    printf("Enter the bsic salaray:");
    scanf("%f", &basic);

    hra = 0.30 * basic;
    da = 0.20 * basic;
    insentive = 7000;
    loan_repay = 14000;
    income_tax = 0.10 * basic;

    gross_salary = basic + hra + da + insentive;
    net_salary = gross_salary - (loan_repay + income_tax);

    printf("\n---- Salary Slip ----\n");
    printf("Basic Salary     : %.2f\n", basic);
    printf("HRA (30%%)       : %.2f\n", hra);
    printf("DA (20%%)        : %.2f\n", da);
    printf("Incentive        : %.2f\n", insentive);
    printf("Loan Deduction   : %.2f\n", loan_repay);
    printf("Income Tax (10%%): %.2f\n", income_tax);
    printf("Gross Salary     : %.2f\n", gross_salary);
    printf("Net Salary       : %.2f\n", net_salary);

    return 0;
}
