/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Lab Test 1
Description : Program to check triangle.
*/

#include <stdio.h>
#include <math.h>
int main()
{
   int ax, ay, bx, by, cx, cy;
   int lab, lbc, lca;
   float mab, mbc, mca;

   printf("Enter coordinates of point 1.\n");
   scanf("%d %d", &ax, &ay);
   printf("Enter coordinates of point 2.\n");
   scanf("%d %d", &bx, &by);
   printf("Enter coordinates of point 3.\n");
   scanf("%d %d", &cx, &cy);
   
   lab= sqrt( pow((bx-ax),2) + pow((by-ay),2) );
   lbc= sqrt( pow((cx-bx),2) + pow((cy-by),2) );
   lca= sqrt( pow((ax-cx),2) + pow((ay-cy),2) );

   mab= ((float)(by-ay)/(bx-ax));
   mbc= ((float)(cy-by)/(cx-bx));
   mca= ((float)(ay-cy)/(ax-cx));

   if ( (lab+lbc>lca) && (lbc+lca>lab) && (lca+lab>lbc))
   {
	//right angled triangle
	if ( (pow(lab,2)+pow(lbc,2)==pow(lca,2)) ||  (pow(lca,2)+pow(lbc,2)==pow(lab,2)) || (pow(lab,2)+pow(lca,2)==pow(lbc,2)) )
	printf("Right Angled");
   }
   else
   printf("Invalid");
   
   return 0;
}
