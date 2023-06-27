/*
Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
Example

Input

Enter principle: 1200

Enter time: 2

Enter rate: 5.4

Output

Simple Interest = 129.600006

Principal + Interest = 1329.6
*/
#include<stdio.h>
int main(){
    float p,t,r,si;
    printf("Enter principle: ");
    scanf("%f",&p);
    printf("Enter time:  ");
    scanf("%f",&t);
    printf("Enter rate:  ");
    scanf("%f",&r);

    si =(p*t*r)/100;

    printf("Simple Interest = %f",si);

    return 0;
}

