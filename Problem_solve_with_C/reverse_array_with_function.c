/*
Write a function named reverse_array() which will take an array, size of that array and reverse that array. 
You don’t need to return anything because if you reverse that array, 
the changes will be applied to the original array also.
*/


#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int arr[], int n)
{
    int i=0, j=n-1;

    while(i<j)
    {
        swap(&arr[i], &arr[j]);
        i++;
        j--;
    }
}

int main(){

    int a[] = {2,3,5,6,8};
    int sz = sizeof(a)/sizeof(a[0]);
    
    reverse(a,sz);

    for(int i =0; i<sz;i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}