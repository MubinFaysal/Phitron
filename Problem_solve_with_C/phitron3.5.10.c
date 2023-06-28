
/*Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
        Expected Input/Output:

Weight - Item1: 15

No. of item1: 5

Weight - Item2: 25

No. of item2: 4

Expected Output:

Average Value = 19.444444

*/

#include<stdio.h>
int main(){
    float n1,n2,i1,i2,avg;
    printf("Weight - Item1: ");
    scanf("%f",&n1);
    printf("No. of item1: ");
    scanf("%f",&i1);

    printf("Weight - Item2: ");
    scanf("%f",&n2);
    printf("No. of item2: ");
    scanf("%f",&i2);

    avg =((n1*i1)+(n2*i2))/(i1+i2);
    printf("Average Value = %f\n",avg);
    return 0;
}

