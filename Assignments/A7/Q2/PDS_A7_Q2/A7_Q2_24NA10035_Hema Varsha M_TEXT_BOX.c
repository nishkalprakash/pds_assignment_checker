#include <stdio.h>
// function to find gcd
int gcd(int a, int b)
 {
   int n,g=1;
   if (a<=b)
        n=a;
   else
       n=b;
   for(int i=2;i<=n;i++)
     {if(a%i==0 && b%i==0)
        g=i;
        }
  return g; 
   }
// function to check if the given pair is coprime or not   
void coprime(int a, int b)
 {
   if (gcd(a,b)==1)
     printf("\n%d and %d are Co-prime",a,b);
     
   }
void pair(int a[])
 {
 int j,k,flag=0;
  //pairing and checking if the numbers are coprimes
  for (j=0;j<5;j++)
  {
   for(k=j+1;k<5;k++)
   {
   if ( gcd(a[j],a[k])==1);
      { 
       coprime(a[j],a[k]);
       flag=1;
       //printf("%d",flag);
      }l
   }
  }
 // printf("%d",flag);
  if (flag==0) 
    printf("no co-primes found");
   }
int main()
{ 
  int arr[5],i; //i,j,k looping variables
  // read 5 numbers and store in array
  for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
  pair(arr);
  return 0;
  }