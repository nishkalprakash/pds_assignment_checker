#include<stdio.h>
int main()
{
  int n, sum=0,max=0;
 printf("Enter the number: ");
 scanf("%d", &n);
 while (n != 0)
   {
     sum = sum + (n % 10);
     if (max<(n%10))
       {
	 max = (n%10);
       }
     n = n / 10;
   }
 printf ("The sum of digits is %d\n", sum);
 printf("The largest digit is: %d\n", max);
     
}
