
/*
Write a C program that takes a positive float number and outputs its integer part and real part.
        Expected Input/Output:

                Enter Number: 3.578

                Integer part: 3

                Real part: .578

*/

#include<stdio.h>
int main(){
    float a ;
    printf("Enter Number: ");
    scanf("%f",&a);

    int b =(int) a;
    float c = a-(float)b;
    float d = c*1000;
    printf("%d\n",b);

    printf(".%.0f\n",d);

    return 0;
}
