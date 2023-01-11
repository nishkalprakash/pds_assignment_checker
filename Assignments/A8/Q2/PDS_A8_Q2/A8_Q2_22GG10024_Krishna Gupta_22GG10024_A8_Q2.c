/*Name - Krishna Gupta
  Section - 14
  Roll no. - 22GG10024
  Assignment - checking saddle point in a matrix*/
#include<stdio.h>
int main()
{
int i,j,n;
 printf("Enter the shape of the 2-D array :");   // taking the shape of the array
 scanf("%d",&n);
 int a[n][n],tempr[],tempc[];
 for (i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
     {
      scanf("%d",&a[i][j]);
     }
   }
 for (i=0;i<n;i++)
  {
     printf("\n");
    for(j=0;j<n;j++)
     {
      printf("%d",a[i][j]);
     }
   }
int min,max;
 for (i=0;i<n;i++)
  {
    for(j=0;j<n;j++)                     //finding the saddle point in the matrix
     {
       max=a[i][j];
       if (a[i][j]>max)
{   
      max=a[i][j];
      tempc[i]=max;
}  
return 0;
}
