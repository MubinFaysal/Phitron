/*
Write a C program that accepts two integers from the user and calculate the product of the two integers.
Expected Input/Output:

Input the first integer: 25

Input the second integer: 15

Expected Output:

Product of the above two integers = 375
*/

#include<stdio.h>
int main(){
    int a,b;
    printf("Input the first integer: ");
    scanf("%d",&a);
    printf("Input the secondt integer: ");
    scanf("%d",&b);

    printf("Product of the above two integers = %d\n",a*b);


    return 0;
}

