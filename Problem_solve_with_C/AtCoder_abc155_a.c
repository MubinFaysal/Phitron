/*
A triple of numbers is said to be poor when two of those numbers are equal but the other number is different from those two numbers.

You will be given three integers 
A, 
B, and 
C. If this triple is poor, print Yes; otherwise, print No.

Input is given from Standard Input in the following format:

A 
B 
C
output 
If the given triple is poor, print Yes; otherwise, print No.
*/
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(((a==b) && (a!=c)) || ((a==c) &&(a!=b)) ||(( b==c) &&(b!=a))){
        printf("Yes\n");
    }else{
    printf("No\n");
    }

    return 0;
}
