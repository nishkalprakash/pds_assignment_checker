//Assignment 5
//Section 14
//Name:Sanika Kadam
//Question 2


//To find gcd of two numbers
//To check if two numbers are co prime
//To find number of pairs of coprime numbers

#include<stdio.h>

int gcd(int a,int b);
void coprime(int a,int b);


int main()
{
 int a[],b;
 printf("Enter 5 number: ");
for(int i=1; i<=5;i++)
 scanf("%d",&a[i]);
 


coprime( a, b);
return 0;

}

int gcd(int a,int b)
{
 int temp;
if(a>b)
  {
  temp=a;a=b;b=temp;
  }
while((b%a)!=0)
  {
    temp=b%a;
    b=a;
    a=temp;
  }
return a;
}


void coprime(int a,int b)
 {
for(int i=1; i<=5;i++)
for(int j=i+1; j<=5;j++)
{
  if(int gcd(a[i], a[i+1]) ==1)
    {
      printf("Numbers are coprime");
      return 0;
    }
  else
    {
      printf("Numbers are not coprime");
      return 0;
    }
}
}



 


