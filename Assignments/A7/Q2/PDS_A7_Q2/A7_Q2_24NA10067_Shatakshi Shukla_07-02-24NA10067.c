//program to calculate the co prime pairs in an array
//Code creator Shatakshi Shukla

#include <stdio.h>
#define size 5
int gcd(int a,int b)
  {
   int temp;  //temprorary variable to store the remainders on dividing 2 numbers
   while(a>1){    //if a is greater than 1 than they have common facor other than which is not co prime
   temp=b%a; 
   b=a;
   a=temp;
   }
    return a;
     //after calculating the function returns a
   }
int Coprime(int a,int b)
{
  if(gcd(a,b)==1)   //if gcd function returns 1 then the 2 numbers are co prime
  return 1;
  else 
  return 0;       //else not a co prime pair
  }
int main()
{
int A[20];
int count=0;  //the counter variable to keep a check on the number of co prime pairs
for(int i=0;i<size;i++)
{
 scanf("%d",&A[i]);
 }
 for(int k=0;k<size;k++)
 {
   for(int j=k+1;j<size;j++)
   {
     if(Coprime(A[k],A[j])){     //if coprime returns 1 then then print the co prime pairs
     count++;
     printf("%d and %d are Co prime\n",A[k],A[j]);
     }
     }
     }
     if(count==0)  //if counter variable returns 0 then there are no no co prime pairs found
     printf("No co prime found");
     return 0;
     }
     
