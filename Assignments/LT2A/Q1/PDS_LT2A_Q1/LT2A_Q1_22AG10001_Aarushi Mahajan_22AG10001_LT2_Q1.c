/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Lab Test 2
Set A
Description : Program to print elements of 2d array in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>

void create()
{
   int m, n;
   printf("Enter M: ");
   scanf("%d",&m);
   printf("\nEnter N: ");
   scanf("%d",&n);
   
   int x = m*n;
   int temp[x];
   int y=0;
   printf("\nEnter %d elements: ",x);
   for (int i=x-1;i>=0;i--)
   scanf("%d",&temp[i]);
   
   
   for (int j=0;j<m;j++)
   {
	for (int k=0;k<n;k++)
	{
	   printf("%d ",temp[y]);
	   y++;
	}
        printf("\n");
   }
   return;
}

int main()
{
   create();
   return 0;
}
