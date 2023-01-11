/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 8*/
#include<stdio.h>
#define max_size 100
int main()
{
  int i,j,a[ max_size][ max_size],m,n;
  printf(" Enter the number of elements of rows and coloumns: \n");
scanf("%d %d",&m,&n);
  printf(" Enter the  elements of   rows and coloumns: \n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
 

for(j=0;j<n;j++)
 {
   for(i=0;i<m;i++)
    { 
       printf("%d",a[i][j]);
    }
  printf("\n");
 }
  return 0;
}
