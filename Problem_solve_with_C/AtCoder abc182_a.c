/*
You are on a social networking site called twiblr.
In twiblr, you can follow at most 
2×( the number of users following you 
)+100 users.
You are currently following 
B users, and 
A users are following you.
At most, how many extra users can you follow now?

0≤A,B≤10000
B≤2×A+100
All values in input are integers.


Sample Input 1
200 300
Sample Output 1
200

    */
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = 2*a +100;
    printf("%d\n",c-b);


    return 0;
}
