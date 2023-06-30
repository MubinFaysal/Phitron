/*
  Write a program in C that takes two inputs x and y and prints all numbers that are multiples of x but divisors of y.  If there are none, print no such integers.
Test Data :

5 20

Expected Output :

5 10 20


Test Data :

6 20

Expected Output :

No such integers
    */
#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int count =0;
    for (int i=a; i<=b; i++){

            if( i%a==0 && b%i==0){
                printf("%d ",i);
                count++;
            }
    }
    if(count ==0){
        printf("No such integers");
    }

    return 0;
}

