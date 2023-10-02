/*
Write a C code which takes an array of size N as input and do the following:
Make reverse of that array and print the differences between every value of the original and reversed array.

For example:
Input:
5
1 4 6 2 7
Output:
6 2 0 2 6
*/

#include<stdio.h>
int main(){


    int n;
    scanf("%d",&n);
    int i=0,a[n];

    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ",a[i]);
    }
}