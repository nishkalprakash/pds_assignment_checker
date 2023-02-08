/* 
NAME: KRITHANYA
SET: b
*/

#include <stdio.h>
void getelements()
{
int r,c,i,j;
printf("enter no. of rows\n");
scanf("%d",&r);
printf("enter no. of columns\n");
scanf("%d",&c);
int arr[r][c];
printf("enter array elements\n");
for (i=0;i<r;i++)
   for (j=0;j<c;j++)
    scanf("%d",&arr[i][j]);
for (i=0;i<r;i++)
{
	printf("\n");
	for (j=0;j<c;j++)
	{
	printf("%d ",arr[i][j]);
	}
}
}
int main()
{
getelements();
return 0;
}
