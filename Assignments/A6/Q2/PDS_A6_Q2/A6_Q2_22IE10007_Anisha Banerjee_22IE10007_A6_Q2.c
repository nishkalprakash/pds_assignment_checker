/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 5
Program to find coprime numbers
*/
#include <stdio.h>
count=0;
int gcd(int m,int n)
   {
     while((m!=0)&&(n!=0))
       {
     if (m==n)
       return m;
     if(m>n)
       {
        m=m%n;
       return gcd(m,n);
        }
     if (n>m)
       {
         n=n%m;
       return gcd(m,n);
       }
   }
     if (m==0)
       return n;
     if (n==0)
       return m;
  }
void CoPrime(int a,int b)
    {
      int flag;
      flag=gcd(a,b);
      if (flag==1)
         {
           count=count+1;
           printf("(%d,%d) ",a,b);
         }
     }
void pair(int a[])
    {
      int i=0,j=0;
      for(i=0;i<5;i++)
         {
           for(j=i+1;j<5;j++)
              {
                CoPrime(a[i],a[j]);
             }
         }    
      return;
    }
 int main()
    {
    float num[5];
    int arr[5];
    int i,p;
    printf("Enter the array numbers\n");
    for (i=0;i<5;i++)
         scanf("%f", &num[i]);
    for(i=0;i<5;i++)
       {
         if(num[i]<=0)
           {
             printf("Invalid entries:All should be integer numbers\n");
             return 0;
           }
         p=(num[i]);
         if (p==num[i])
            arr[i]=p;
         else 
           {
            printf("Invalid entries:All should be integer numbers\n");
           return 0;
      }
    }
     pair(arr);
    if (count==0)
      printf("No Co-prime found\n");
    return 0;
     }
