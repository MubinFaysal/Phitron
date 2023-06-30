/*
Write a C program that accepts two integers and prints true 
if either one is 5 or their sum or difference is 5.
    */
#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",num1,num2);
    
    if(num1==5 || num2==5){
        printf("true\n");
    }else if(num1+num2==5 || num1-num2 ==5 || num2-num1==5){
        printf("true\n");
    }
    
    

    return 0;
}

