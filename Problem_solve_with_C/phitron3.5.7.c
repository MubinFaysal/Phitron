
/*

Write a C program to input temperature in Centigrade and convert to Fahrenheit. Example
Input

Enter temperature in Celsius = 100

Output

Temperature in Fahrenheit = 212.0 F

*/

#include<stdio.h>
int main(){
    float f,c;
    printf("Enter temperature in Celsius = ");
    scanf("%f",&c);

    f= (c*1.8)+32;

    printf("emperature in Fahrenheit = %.1f F",f);


    return 0;
}

