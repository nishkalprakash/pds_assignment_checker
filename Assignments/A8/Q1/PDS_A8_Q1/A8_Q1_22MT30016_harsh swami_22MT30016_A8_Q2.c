/* section 14
  name:harsh
  roll no:22MT30016
  question no:2 */
  

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int size,i,j;
 
   printf("enter number of rows:");
   scanf("%d",&size);

   int a[size][size],transpose[size][size];
   printf("enter elements:");

   for(i=0;i<size;i++)
    {
     for( j=0;j<size;j++)
       
        {
          scanf("%d",&a[i][j]);
        }
      

    }
for(i=0;i<size;i++)
{
  for(j=0;j<size;j++)
    {
      transpose[j][i]=a[i][j];
    }
}
     printf(" column major order");

   

     for( i=0;i<size;i++)
{
    for( j=0;j<size;j++)
    {
      printf("%d",transpose[i][j]);
    }
}
printf("\n");

return 0;
}
