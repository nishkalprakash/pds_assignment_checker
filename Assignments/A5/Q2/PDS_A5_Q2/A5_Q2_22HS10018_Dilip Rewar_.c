#include<stdio.h>
/*Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 5
Description: Representing any even number greater than 4 as sum of two prime numbers
*/
int main(){
    int n,i,j,p,q;
    printf("Enter n: ");
    scanf("%d",&n);
    if( n<4 || n%2==1 ){
        printf("Output: -1");
    }
     int primeCheck(int i){
            for(i=2;i<=n;i++){
                if(n%i==0){
                    printf("%d is not prime",n);
                }
                if(n%i!=0){
                    printf("%d is prime",n);
                }
            }
    if(n>4){
            n=primeCheck(n);
            printf("Output:-1");

        }
     }
     if(n>4 && n%2==0){
            if(primeCheck(p)==p){
            n = p + n-p;}
     }


    return 0;
     }