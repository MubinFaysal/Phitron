/*
Write a C program that will first read an integer n, then read n integers. From those,
it will find the sum of even integers.
Example:

Enter n: 5
Input 5 integers: 2 3 5 6 7

Sum of even integers = 8
    */
#include<stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);

    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==1){
            sum +=a;
        }
    }
    printf("%d\n",sum);


    return 0;
}

