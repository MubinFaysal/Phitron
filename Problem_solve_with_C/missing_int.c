/*
How do you find the missing number in a given integer array of 1 to 10 in c 
*/
#include <stdio.h>
int main(){

int ch[10];
int arr[10];
int total_sum = 10*11/2;
int arr_sum = 0;

for(int i = 1; i <=9; i++)
{
    scanf("%d",&ch[i]);
    arr_sum += ch[i];
}

int missing_value = total_sum -arr_sum;

printf("%d\n",missing_value);


}