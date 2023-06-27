/*
Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient and modulus of two given numbers.
Example

Input

First number: 10

Second number: 5

Output

Sum = 15

Difference = 5

Product = 50

Quotient = 2

Modulus = 0
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("First number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);

    printf("Sum = %d\n",a+b);
    printf("Difference = %d\n",a-b);
    printf("Product = %d\n",a*b);
    printf("Quotient = %d\n",a/b);
    printf("Modulus = %d\n",a%b);
}

