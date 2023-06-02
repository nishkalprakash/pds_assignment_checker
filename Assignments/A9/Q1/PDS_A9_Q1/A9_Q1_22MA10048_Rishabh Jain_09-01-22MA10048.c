#include <stdio.h>

 int checkFib(int n)
 {
     for(int i=1;i<n-1;i++)
     {
         if(f(i)==n)
         {
             return 1;
         }
     }
     return 0;
 }


 int f (int n)
 {
    if (n < 2)
    {
        return n;
    }
    else
    {
       return (f(n − 1) + f(n − 2));
    }
 }



 int main()
 {
     int n;
     scanf("%d",&n);

     if (checkFib(n))
     {
         printf("%d is a Fibonacci number",n);
     }
     else
     {
         printf("no");
     }
 }
