/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 5
 *Description   : Finding coprimes
 */

#include<stdio.h>
int gcd(int a,int b);
void coprime(int a,int b);
void pair(int a[]);
int main ()
{
  int a[5];
  int t,i,j;
for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
        t=coprime(a[i],a[j]);
  
   
  if (t==1)
   printf("%d and %d are co-prime",a[i],a[j]);
 }
  
}

int gcd(int a,int b)
{
  int quo,rem;
  for(rem!=0;rem!=0;b=a,a=rem)
  {
    quo=b/a;
    rem=b%a;
    
    
  }
  return(b);
}

void coprime(int a,int b)
{
  if(gcd(a,b)=1)
    return 1;
  else
    return 0;
}

 

