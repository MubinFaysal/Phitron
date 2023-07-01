/*
Takahashi is participating in a programming contest, AXC001. He has just submitted his code to Problem A.
The problem has 
N test cases, all of which must be passed to get an AC verdict.
Takahashi's submission has passed 
M cases out of the 
N test cases.
Determine whether Takahashi's submission gets an AC.

Constraints
1≤N≤100
0≤M≤N
All values in input are integers.
Input
Input is given from Standard Input in the following format:

N 
M
Output
If Takahashi's submission gets an AC, print Yes; otherwise, print No.

Sample Input 1 
Copy
3 3
Sample Output 1 
Copy
Yes
*/

#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a==b){
        printf("Yes\n");
    }else{
     printf("No\n");
    }



    return 0;
}
