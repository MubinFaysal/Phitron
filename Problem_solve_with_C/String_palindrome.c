#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    scanf("%s",&a);

    strcpy(b,a);
    strrev(b);
    

    int i=0; 
    while(i<strlen(a)){
        if(a[i] !=b[i]){
            printf("No\n");
            return 0;
        }
        
    }
    printf("Yes\n");
  


}