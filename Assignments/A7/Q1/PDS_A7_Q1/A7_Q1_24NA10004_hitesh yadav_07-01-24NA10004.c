#include<stdio.h>
#include<math.h>
int fact(int n)
{
int count,prod;
for(count=1;count<=n;count++)
prod=1;
prod=prod*count;
count++;
return prod;
}
int power(int x,int n){
int m=1,prod;
prod=1;
for(m=1;m<=n;m++)
prod=x*x;
m++;
return prod;
}

 
 
 
 
 
