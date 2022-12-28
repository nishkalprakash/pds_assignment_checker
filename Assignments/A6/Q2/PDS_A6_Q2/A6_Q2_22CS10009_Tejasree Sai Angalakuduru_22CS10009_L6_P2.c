/*
 Sec      :14
 Name     :A.Tejasree Sai
 Roll no  :22CS10009
 Assignment no : 6
 Description  : Printing coprimes
*/

#include<stdio.h>

int gcd(int m,int n);
void coprime(int a, int b);
void pair(int a[]);


int main ()
{
 int a[5];
 int i;
 for(i=0;i<5;i++)
 {
  printf("Enter number %d",i+1);
  scanf("%d",&a[i]);
 }
  for(i=0;i<5;i++)
   {
     if(a[i]<0)
       printf("Invalid inputs");
     }
     
        pair(a);
    
  return 0;
 
}

int gcd(int m,int n)
{
  int t;
  if(m<n)
   {
    t=m;
    m=n;
    n=t;
   }
  if(n==0)
    return m;
  else
    return gcd(n,m%n);

}

void coprime(int a, int b)
{
  int r;
  r=gcd(a,b);
  if(r==1)
   printf("(%d,%d)",a,b);
}

void pair(int a[])
{ 
  int i,j;
  
  for (int i = 0; i < 5; i++)
     {   for (int j = i + 1; j < 5; j++)
            coprime(a[i], a[j]);
     }
}
        
      
   
