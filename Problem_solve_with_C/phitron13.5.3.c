/*
Write a C program to read elements in an array and find the maximum of array elements.
Also find how many times the maximum occurs.
Example Input
Input elements: 10, 20, 50, 40, 50, 30, 40
Output
Maximum is 50
Maximum occurs 2 times
*/
#include<stdio.h>
int main(){
    int n=7;
    int a[n];
    printf("Input elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int count =0;
    int max =0;
    for(int i=0; i<n; i++){
        if(max < a[i])  {
                max =a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(max == a[i])  {
                count++;
        }
    }


    printf("Maximum is %d\n",max);
    printf("Maximum occurs %d times \n",count);

    return 0;
}
