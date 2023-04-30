/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 5
* Description : Representing any even number as a sum of two prime numbers
*/
#include<stdio.h>
//function for checking if a number is a prime number
int primecheck(int i)
    {
        int j;
       for(j=2;j<i;j++)
       {
           if(i%j==0)
            break;
       }
       if(j==i)
       {
           return i;
       }
       else
       {
           return 0;
       }
    }
int main()
{
    int n,i,k,count=0;
    //Taking input value
    printf("Enter the value of n\n");
    scanf("%d",&n);
    //Returning -1 if n is odd or n is less than 4
    if(n<4||n%2==1)
    {
        printf("-1");
    }
    else if((n>4)&&(n%2==0))
    {
      for(k=3;k<n;k+=2)
      {
    //checking if the number is prime and later if the difference of it with n prime
          if(primecheck(k)==k)
          {
              if(primecheck(n-k)==(n-k))
              {
                  printf("%d,%d",k,n-k);
                  count=1;

              }
          }
          else
          {
            continue;
          }
          if(count==1)
          {
              break;
          }

      }

    }
    return 0;

}
