/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 5
* Description : Goldbach's Conjecture
*/
#include<stdio.h>

//function prototype/declaration
int primeCheck(int t);
int sumAsOdd(int n);

int main(){
   int n,n3,i;
   printf("Enter n:");
   scanf("%d",&n);
   n3= sumAsOdd(n);
   if(n%2==0 && n!=2){
       printf("%d %d",n3,n-n3);
   }
return 0;
}

//function definition
int primeCheck(int n){
   int ctr=0;
   for(int i=2;i<n;i++){
    if(n%i==0) ctr++;

   }
   if(ctr==0){
    return 1;
   }
else return 0;
}

int sumAsOdd(int n){

    if(n>=4 && n%2==0){
        for(int i=2;i<n;i++){
            int n1=primeCheck(i);
            int n2=primeCheck(n-i);
            if(n1==1 && n2==1){
                return i;
                break;
            }
        }
    }
    else printf("-1");

}
