/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:1(b)
*/
#include<stdio.h>
int reverse(int n,int k){

     if(n==0)
        {
          return k;
        }
        return reverse(n/10,n%10+k*10);

     }
   int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("%d" is a reverse number,reverse(n,0));



     return 0;
     }
