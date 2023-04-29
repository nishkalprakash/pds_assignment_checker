/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 4
* Description : Program to find even integers in terms of sum of two prime numbers
*/

#include <stdio.h>

int primecheck (int i){              // define a function to check prime numbers
    int n=2,c=0;

    for(n;n<i;n++){
        if(i%n==0){
            c++;
        }
    }
    if(c!=0){
        return 0;
    }
    else {
            return 1;
    }



}

void primesum(int n){        //Define a function to get the even integer in terms of sum of prime numbers
    int p,q,i=2;
      if(n>3 && n%2==0){
        for(i;i<n;i++){
            p=primecheck(i);
            q=primecheck(n-i);
            if(p==1 && q==1){
                printf("%d,%d",i,n-i);
                break;

            }
        }

      }
      else printf("-1");



}


int main(){    //To print the final answer
    int i;

    printf("Enter the integer: ");
    scanf("%d",&i);

    primesum(i);



    return 0;








}

