/*
You are given two integers
A and
B. Find the largest value among
A+B,
A−B and
A×B.

*/

#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum,sub,mul;

    sum = a+b;
    sub = a-b;
    mul = a*b;

    if(sum >= sub && sum>= mul){
        printf("%d\n",sum);
    }else if(sub >= sum && sub>= mul){
        printf("%d\n",sub);
    }else if(mul >= sum && mul>= sub){
        printf("%d\n",mul);
    }


    return 0;
}
