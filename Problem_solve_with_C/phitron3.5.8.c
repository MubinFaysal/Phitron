
/*
Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
Example

Input

Temperature in fahrenheit = 205

Output

Temperature in celsius = 96.11 C



*/

#include<stdio.h>
int main(){
    float f,c;
    printf("Temperature in fahrenheit = ");
    scanf("%f",&f);

    c =5*(f-32)/9;
    printf("Temperature in celsius = %.2f C",c);


    return 0;
}

