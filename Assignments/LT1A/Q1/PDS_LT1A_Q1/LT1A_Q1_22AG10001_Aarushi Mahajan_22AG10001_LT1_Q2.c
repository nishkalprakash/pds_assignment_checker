/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Lab Test 1
Description : Program to print perfect numbers.
*/

#include <stdio.h>
int main()
{
   int n, i, j, k=0, sum=0;
   printf("Enter input.\n");
   scanf("%d",&n);
   int a[n];
   
   if (n>1)
   {
      for(i=1;i<=n;i++)
      {
	 for(j=1;j<=i;j++)
	{
	 if ((i%j)==0)
	{
	  a[k]=j;
	  k++;
	  printf("&%d&",k);
	}  
	}
         for (j=0;j<(k-1);j++)
	  {
	   sum= sum+a[j];
	   printf("%d \t",sum);
	  }
	 printf("\n");
      }
   }
   
   else 
   printf("Invalid input.\n");

   return 0;
}


