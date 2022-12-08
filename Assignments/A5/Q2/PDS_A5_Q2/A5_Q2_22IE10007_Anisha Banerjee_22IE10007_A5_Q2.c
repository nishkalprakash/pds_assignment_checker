/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 5
Program to find coprime numbers
*/
#include <stdio.h>
int flag=0,count=0;
int gcd(int a,int b)
   {
     int temp,flag=0;
     if (a>b)
       {
         temp=a;
         a=b;
         b=temp;
       }
     while ((b%a)!=0)
          {
            temp=b%a;
            b=a;
            a=temp;
          }
     if(a==1)
       flag=1;
    return flag;
}
void CoPrime(int a,int b)
    {
      flag=gcd(a,b);
      if (flag==1)
         {
           count=count+1;
           printf("%d and %d are Co-prime\n",a,b);
         }
     }
void pair(int a[])
    {
      CoPrime(a[0],a[0]);
      CoPrime(a[0],a[1]);
      CoPrime(a[0],a[2]);
      CoPrime(a[0],a[3]);
      CoPrime(a[0],a[4]);
      CoPrime(a[1],a[1]);
      CoPrime(a[1],a[2]);
      CoPrime(a[1],a[3]); 
      CoPrime(a[1],a[4]); 
      CoPrime(a[2],a[2]);
      CoPrime(a[2],a[3]); 
      CoPrime(a[2],a[4]);
      CoPrime(a[3],a[3]);
      CoPrime(a[3],a[4]);
      CoPrime(a[4],a[4]);     
      return;
    }
 int main()
    {
    int num[5];
    int i;
    printf("Enter the array numbers\n");
    for (i=0;i<5;i++)
         scanf("%d", &num[i]);
     pair(num);
    if (count==0)
      printf("No Co-prime found\n");
    return 0;
     }
