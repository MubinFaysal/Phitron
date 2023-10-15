/*
insert an element in array;
*/

#include<stdio.h>
void insert_element(int *a, int n, int pos, int element)
{
    for(int i=n; i>pos; i--)
    {
        a[i+1] = a[i];
    }
}

int main(){
    
    int arr[]={2,3,4,5,7,8};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int pos,element;
    printf("Enter position and element : ");
    scanf("%d %d",&pos,&element);
    insert_element(&arr[n], n, pos,element);

    for(int i=0; i<n+1; i++)
    {
        printf("%d ",arr[i]);
    }
}