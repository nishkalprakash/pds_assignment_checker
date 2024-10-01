#include<stdio.h>
int gcd(int a , int b)//definition of gcd
{
 int temp;
 while (a!=0)
 {
  temp=a;
  a=b%a;
  b=temp;
 }
 return b;
}
void  CoPrime( int a , int b)//function definition of coprime finding 
{
 if (gcd(a,b)==1) printf("%d and %d are coprime\n",a,b);
}
void pair( int a[],int n )//function definition of pair of array function
{
for (int i=0;i<n;i++)
 {
  for (int j=i+1; j<5;j++)
  {
   CoPrime(a[i],a[j]);
   }
  }
 }
void nocoprime(int a[],int n)// function definition of no coprime case 
{
int c=0;
for (int i=0;i<n;i++)
 {
  for (int j=i+1; j<5;j++)
  {
   if (gcd(a[i],a[j])!=1)
   c++;
   }
  }
 
 if (c==10) printf("No coprime found");
 }
int main()//main function body 
{
int a[5];
for (int i=0;i<5;i++)
{
 scanf("%d",&a[i]); 
}
pair(a,5);
nocoprime(a,5);
return 0;
}
