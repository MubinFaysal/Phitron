/*
How do you find the duplicate number on a given integer array in c?
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n], arr2[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]); 
    }
    int count[] ={0};
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("%d ",arr[i]);
            }
        }
        printf("\n");
    }
}