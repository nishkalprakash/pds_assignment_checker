//Assignment 6
//Section 14
//Name:Sanika Kadam
//Question 2

#include<stdio.h>

//Function to find gcd of two numbers

int gcd(int m,int n)
{
 if(m == n)
   return m;
 if(m==0)
   return n;
 if(n==0)
   return m;
 if(m>n)
   return gcd((m-n),n);
 else if(n>m)
   return gcd(m,(n-m));
}





//Function to pair coprime numbers
void pair(int A[])
{
 int i,j;
 for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
      {
        if(gcd(A[i],A[j])==1)
          printf("(%d,%d)",A[i],A[j]);
      }
  }
}

int main()
{
 int A[5]; 
 printf("Enter 5 numbers in array: ");
 for(int i=0;i<5;i++)
   {
     scanf("%d",&A[i]);
   }
 for(int i=0;i<5;i++)
    {
       if(A[i]<0) 
        {
        printf("All entries should be positive");
        return 0;
        }
    }

 printf("Co prime pairs are: ");
 pair(A);
 return 0;
}
 

