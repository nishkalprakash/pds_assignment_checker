/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 9
* Description : Checking for a fibonacci number
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Value of n: %d\n",n);
    if(n<0)
    {
        printf("Please give positive number as input.\n");
    }
   else
   {
    int x=0;
    while(x<=n)
    {
      x=a+b;
      a=b;
      b=x;
    }
    if(n==a)
    {
        printf("%d is a fibonacci number\n",n);
    }
    else if(pow(n-x,2)==pow(n-a,2))
    {
        printf("Nearest fibonacci number : %d",a);
    }
    else if(pow(n-x,2)>pow(n-a,2))
    {
        printf("Nearest fibonacci number : %d",a);
    }
    else
    {
       printf("Nearest fibonacci number : %d",x);
    }
   }
    return 0;

}
