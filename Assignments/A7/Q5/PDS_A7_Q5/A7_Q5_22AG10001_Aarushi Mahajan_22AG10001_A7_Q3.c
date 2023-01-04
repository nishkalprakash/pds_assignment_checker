/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 7
Description : Program to check how many elements are out of order.
*/

#include <stdio.h>
int main()
{
   


  
 int n, m;
   printf("How many elements are in the array?\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter elements of array.\n");
   for (int i=0;i<n;i++)
   scanf("%d",&a[i]);
   
  int flag=0;
   int x,j=0;
   
	while (j<n-1)
       { if(a[j]<=a[j+1])
		{j++;
             }
         else 
	{flag=1;
          break;}
       }

   if(flag==1)
   printf("Out of order: %d",n-j);
   else
  printf("Out of order: %d",0);
   
   return 0;
}
   
