/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 8
Description : Program to find the saddle point of the array.
*/

#include <stdio.h>
int main()
{
   int r, c;
   printf("Enter number of rows:\n");
   scanf("%d",&r);
   printf("Enter number of columns:\n");
   scanf("%d",&c);
   int a[r][c];

   int i, j;
   printf("Enter elements of the array.\n");
   for (i=0;i<r;i++)
   {
	for (j=0;j<c;j++)
	{
	   scanf("%d",&a[i][j]);
        }
   }

   int cmax0, cmax1, cmax2;
   for (i=0;i<r;i++)
   {
	if (a[0][0]>a[1][0]&&a[0][0]>a[2][0])
	cmax0= a[0][0];
	if (a[1][0]>a[0][0]&&a[1][0]>a[2][0])
	cmax0= a[1][0];
	if (a[2][0]>a[0][0]&&a[2][0]>a[1][0])
	cmax0= a[2][0];
   }
   for (i=0;i<r;i++)
   {
	if (a[0][1]>a[1][1]&&a[0][1]>a[2][1])
	cmax1= a[0][1];
	if (a[1][1]>a[0][1]&&a[1][1]>a[2][1])
	cmax1= a[1][1];
	if (a[2][1]>a[0][1]&&a[2][1]>a[1][1])
	cmax1= a[2][1];
        
   }
   for (i=0;i<r;i++)
   {
	if (a[0][3]>a[1][3]&&a[0][3]>a[2][3])
	cmax2= a[0][3];
	if (a[1][3]>a[0][3]&&a[1][3]>a[2][3])
	cmax2= a[1][3];
	if (a[2][3]>a[0][3]&&a[2][3]>a[1][3])
	cmax2= a[2][3];
   }
  

   int rmin0, rmin1, rmin2;
   for (j=0;j<c;j++)
   {
	if (a[0][0]<a[0][1]&&a[0][0]<a[0][2])
	rmin0= a[0][0];
	if (a[0][1]<a[0][0]&&a[0][1]<a[0][2])
	rmin0= a[0][1];
	if (a[0][2]<a[0][0]&&a[0][2]<a[0][1])
	rmin0= a[0][2];
   }
   for (j=0;j<c;j++)
   {
	if (a[1][0]<a[1][1]&&a[1][0]<a[1][2])
	rmin1= a[1][0];
	if (a[1][1]<a[1][0]&&a[1][1]<a[1][2])
	rmin1= a[1][1];
	if (a[1][2]<a[1][0]&&a[1][2]<a[1][1])
	rmin1= a[1][2];
   }
   for (j=0;j<c;j++)
   {
	if (a[2][0]<a[2][1]&&a[2][0]<a[2][2])
	rmin2= a[2][0];
	if (a[2][1]<a[2][0]&&a[2][1]<a[2][2])
	rmin2= a[2][1];
	if (a[2][2]<a[2][0]&&a[2][2]<a[2][1])
	rmin2= a[2][2];
   }
   
   
   if (cmax0==rmin0)
   {printf("The saddle point is %d\n",cmax0);}
   else if (cmax1==rmin1)
   {printf("The saddle point is %d\n",cmax1);}
   else if (cmax2==rmin2)
   printf("The saddle point is %d\n",cmax2);
   else
   printf("There is no saddle point in this 2D array.");
   
   return 0;
}
