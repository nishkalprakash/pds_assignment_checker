/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Lab Test 1
Description : Program to print pattern based on user input.
*/

#include <stdio.h>
int main()
{
   int n, i, j, num=1;
   printf("Enter input from [2,10].\n");
   scanf("%d",&n);
   
   for (i=1;i<=n;i++)
   {
	for (j=1;j<=i;j++)
	{
	   printf("%d ",num);
	   num++;
	}
	printf("\n");
   }
   return 0;
}
