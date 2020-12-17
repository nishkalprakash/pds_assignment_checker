
#include <stdio.h>

int main()
{
   int a,b,c,d,p,q;

   printf("Enter the cordinates of bottom left corner (a,b):");
   scanf("%d%d",&a,&b);
   printf("\nEnter the cordinates of bottom top right corner (c,d):");
   scanf("%d%d",&c,&d);
   printf("\nEnter the cordinates of the point (p,q):");
   scanf("%d%d",&p,&q);



   printf("\nThe four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)",a,b,a,d,c,d,c,b);

   if(p>a && p<c && q>b && q<d)
   {
       printf("\nThe given point(%d,%d) is inside the rectangle",p,q);
   }
   else
   {
       printf("\nThe given point(%d,%d) is not inside the rectangle",p,q);
   }
}
