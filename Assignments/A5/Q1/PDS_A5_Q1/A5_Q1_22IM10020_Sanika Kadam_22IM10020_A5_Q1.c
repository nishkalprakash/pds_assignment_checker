//Assignment 5
//Section 14
//Name:Sanika Kadam
//Question 1


//To find sum of series


#include<stdio.h>

int power(int x,int n);
int fact(int n);
int series(int x,int n);

int main()
{
 int n,x;
 printf("Enter n: ");
 scanf("%d",&n);
 printf("Enter x: ");
 scanf("%d",&x);

int sum=series(x,n);
printf("Sum of first n terms of series is %d ",sum);
return 0;
}


int power(int x,int n)
{
 if(n==0)
  {
    return 1;
  }
 
  int power=1;
   for(int i=1;i<=n;i++)
    {
     power=power*x;
    }
    return power;
   }


int fact(int n)
{
 
 if(n==0)
  {
    return 1;
  }
 int product=1;
 for(int i=1;i<=n;i++)
  {
    product=product*i;
  }
 return product;
}



int series(int x,int n)
{
 int sum=1;
 for(int i=1;i<=10;i++)
   {
    sum=sum+ (power(x,n)/fact(n));
    return sum;
   }
}


