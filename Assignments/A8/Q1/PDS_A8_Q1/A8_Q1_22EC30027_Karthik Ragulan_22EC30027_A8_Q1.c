
#include<stdio.h>
int main()
{
int arr[100][100];
int i,j,r;
printf("number of elements in one row: ");
scanf("%d",&r);
for(i=0;i<r;i++)
	for(j=0;j<r;j++)
		{
			scanf("%d",&arr[i][j]);
		}
printf("Coulumn major order: \n");
for(i=0;i<r;i++)
	for(j=0;j<r;j++)
		{
			printf("%d ",arr[j][i]);
		}

return 0;
}
