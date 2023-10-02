#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i=0,a[n];
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==1){
            printf("%d ",a[i]);
        }
    }

}