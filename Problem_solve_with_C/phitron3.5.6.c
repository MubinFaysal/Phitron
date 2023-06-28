
/*
Write a C program that accepts an employee's total worked hours of a month and the amount he received per hour. Print salary (with two decimal places) of a particular month.
Test Data :

Input the working hrs: 8

Salary amount/hr: 15000

Expected Output:

Salary = 120000.00

*/

#include<stdio.h>
int main(){
    int wh,ah;
    float salary;
    printf("Input the working hrs: ");
    scanf("%d",&wh);

    printf("Salary amount/hr: ");
    scanf("%d",&ah);
    salary =ah*wh;
    printf("Salary = %.2f",salary);




    return 0;
}
