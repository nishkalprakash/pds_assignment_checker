/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 11
 *Description   : harmonic sum
 */

#include<stdio.h>
#include<stdlib.h>

float hsum(int n)
{
 float t;
 if(n==1)                  //base condition
  t=1.0;
 else
 t=hsum(n-1)+(1.0/n);       //calling function recursively
 return t;
 }

int main ()
{
  int n;
  //float s;
 printf("Enter the no.of terms :\n");
 scanf("%d",&n);
 //s=hsum(n)
 printf("The sum of the series is : %.3f",hsum(n));
 return 0;
}
 
