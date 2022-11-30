
/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 4
 Description : Program to print all factors of the inputted number 
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n<0){
         n=-n; //converting negative number to positive one
    }
    else if(n==0){
         printf("%d",0);
    }

    for (int i=1;i<n+1;i++){
              if(n%i==0){
                   printf("%d ",i);
              }
         }
    
}
