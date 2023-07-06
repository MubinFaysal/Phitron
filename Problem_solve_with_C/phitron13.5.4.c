/*
Write a C program to find the second largest element in an array.
Example
Input
Input array elements: -7 2 3 8 6 6 75 38 3 2
Output
Second largest = 38
*/
#include<stdio.h>

int main(){
    int n = 10,max1,max2;
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    if(a[0]>a[1]){
        max1 = a[0];
        max2 = a[1];
    } else{
        max1 = a[1];
        max2 = a[0];
    }
    for (int i=0; i<n; i++){
        if(a[i]> max1){
            max2 =max1;
            max1 = a[i];
        }else if(a[i]> max2 && max1> a[i]){
            max2 = a[i];
        }
    }


    printf("%d\n",max2);


    return 0;
}
