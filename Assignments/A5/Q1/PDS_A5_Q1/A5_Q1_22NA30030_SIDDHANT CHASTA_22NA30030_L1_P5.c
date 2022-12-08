/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 5
Description :Program to find the sum of first n terms of the series given in the question
*/


#include<stdio.h>

int power(int x,int n); // function to compute x to the power n
int factorial(n); // function to compute factorial n i.e. n!

int main() {
    int x,n,sum,count;
    
    printf("enter the value of x and  n(n<=10) : ");
    scanf("%d %d",&x, &n);
    power(x,n);
    factorial(n);
    for(count=0;count<=n;count++){
            printf("%d",count);
            count= power(x,n)/fact(n) ;break;
      }
    
             sum=sum+count;
             printf("%d\n", sum);
      return 0;

}


int power(int x,int n){
         for(int i=0;i<=n;i++){
               printf("%d",x);
switch(n){
        case 0  : x=0;                       break;
        case 1  : x=x;                       break;
        case 2  : x=x*x;                     break;
        case 3  : x=x*x*x;                   break;
        case 4  : x=x*x*x*x;                 break;
        case 5  : x=x*x*x*x*x;               break;
        case 6  : x=x*x*x*x*x*x;             break;
        case 7  : x=x*x*x*x*x*x*x;           break;
        case 8  : x=x*x*x*x*x*x*x*x;         break;
        case 9  : x=x*x*x*x*x*x*x*x*x;       break;
        case 10 : x=x*x*x*x*x*x*x*x*x*x;     break;

   }
}          

int factorial(n){
        int product;
        for(int i=1;i<=n;i++){
                printf("%d",product);
                product = product*i;
       }
    }
}
                  
                    








