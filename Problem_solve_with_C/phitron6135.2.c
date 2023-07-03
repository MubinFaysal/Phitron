/*
Write a C program to read elements in an array and find the sum of array elements.
Example Input
Input elements: 10, 20, 30, 40, 50
Output
Sum of all elements = 150
*/
#include<stdio.h>
int main(){
    int a[5];
    printf("Input elements: ");
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    int sum =0;
    for(int i=0; i<5; i++){
        sum += a[i];
    }
    printf("Sum of all elements = %d\n",sum);

    return 0;
}
