#include <stdio.h>

/*
 * Portfolio submission
 * Name: Endu 
 * ID:201955361
 */

int main(void) {

    // define and initialise variables for the problem data 
    float salary = 36250;
    float NI = 8;
    float taxrate = 15;

    // calculate the deductions and final take-home salary
    float NICont = salary * NI / 100;
    float remainingSalary = salary - NICont;
    float taxableAmount = remainingSalary - 12500;
    float TaxCont = taxableAmount * taxrate / 100;
    float homesalary = remainingSalary - TaxCont;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NICont);
    printf("Tax contribution £%.2f\n", TaxCont);
    printf("Take home salary £%.2f\n", homesalary);

    return 0;
}