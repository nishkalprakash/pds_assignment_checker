#include<stdio.h>
int main()
{
int A[100][100],B[100][100];
int i,j,m,n;
printf("Shape of the 2D array: ");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
{
		scanf("%d",&A[i][j]);
}
}

for(i=0;i<m;i++)
{
	printf("\n");
		for(j=0;j<n;j++){
			printf("%d ",A[i][j]);
}
}











return 0;
}

