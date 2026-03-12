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
    float perc1 = NI / 100;
    float NICont = salary * perc1;

    float perc2 = taxrate / 100;
    float TaxCont = salary * perc2;

    float homesalary = salary - TaxCont - NICont;

    // print results
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NICont);
    printf("Tax contribution £%.2f\n", TaxCont);
    printf("Take home salary £%.2f\n", homesalary);

    return 0;
}