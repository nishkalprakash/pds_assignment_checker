#include<stdio.h>
#include<time.h>
int fact ( int n)  //function to calculate factorial
{
 if (n==1)
 return (1);
 else
 return (n * fact(n − 1));
}

float pow(float x, int n){   //function to calculate power of x
int i,d=1;
for(i=0;i<n;i++){
    d=d*x;}
return d;
}



