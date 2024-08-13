#include<stdio.h>
int main() {
    int n,S1,S3,a,b,c;  //Declaring variables with suitable data types
    long S2 ;
    printf("Enter number n : ");
    scanf("%d",&n);    //Taking user input
    S1 = n*(n+1)/2;    //Calculation for  S1
    S2 = n*(n+1)*(2*n + 1)/6 ;   //Calculation for  S2
 
    
    a = n/100;  //Hundreds place of n
    b = (n/10)%10 ;  //Tens place of n
    c = n%10;  //Ones place of n
    S3 = a + b + c ;  //Calculation of S3
    printf("S1 = %d, S2 = %ld, S3 = %d ",S1,S2,S3);
}
