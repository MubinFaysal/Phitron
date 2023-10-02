/*
How do you find the missing number in a given integer array of 1 to 100?
*/
#include<stdio.h>

int main(){
    int a[99];
    int x1 = 0;
    int x2 = 0;

    for(int i=0; i<9; i++){
        scanf("%d",&a[i]);
        x1 ^= a[i];
    }

    for(int i=0; i<10; i++){
        x2  ^=i;
    }

    int missing_number = x1 ^x2;
    printf("%d ", missing_number);
}
