/*
SECTION 14
ROLL NO 22CH30005
NAME ANUSHREE GHOSH
assignment 5
*/

#include<stdio.h>

void coprime(int a,int b)
{
 for(int i=2;i<=a;i++)
 {
  if((a%i==0)&&(b%i==0))
  {
   printf("%d and %d are not coprime\n",a,b);
   return;
  }
  else
   {  
   printf("%d and %d  are coprime\n",a,b);
   }
  }
 } 

 int gcd(int a,int b)
{
 if(a>b)
 {
  if(a%b==0)
  return b;
  else
  return gcd(b,a%b);
 }
}


  int main()
{ 
 int a,b,num[5];
 printf("enter 5 numbers");
 for(int i=0;i<5;i++)
{
 scanf("%d",&num[i]);
}
 for(int i=0;i<5;i++)
{
  for(int j=0;j<5;j++)
  {
   coprime(num[i],num[j]);
  }
 }
}


 
