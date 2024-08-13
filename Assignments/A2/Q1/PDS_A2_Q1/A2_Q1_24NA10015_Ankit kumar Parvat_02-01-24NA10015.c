#include<stdio.h>
// programme to compute the sum of first n integer and square of sum of first n integers
int main()
{
    int n;
    printf("\n Enter a int value \n ");
    scanf("%d",&n);// inputing a integer
    int S1= (n*(n+1))/2; // sum of first n integer
    int S2= (n*(n+1)*((2*n)+1))/6; // sum of sqares of first n int
    int a,b,c;
    a=n/100;// first digit of n
    b=(n-(a*100))/10;// second digit of n
    c=((n/10)-(b*10));// third digit of n
    int S3=a+b+c;// sum of digits of n
    printf("S1=%d,S2=%d,S3=%d",S1,S2,S3);
    
}         
        
    
