/*
 Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :

50 50 60

Expected Output :

This is an isosceles triangle.
    */
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c || a+c>b || b+c>a){
        if(a==b==c){
            printf("Equilateral\n");
        }else if(a==b || b==c || a==c){
            printf("Isosceles\n");
        }else if(a !=b !=c){
            printf("Scalene\n");
        }
    }


    return 0;
}

