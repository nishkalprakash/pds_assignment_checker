#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("enter the number of rows and columns\n");
int rows,cols;
scanf("%d",&rows);
scanf("%d",&cols);
int *p;
int *arr[rows];
int i,j;
for(i=0;i<rows;i++)
{
p = (int*)malloc(cols*sizeof(int));
for(j=0;j<cols;j++)
{
scanf("%d",&p[j]);
}
arr[i] = p;
}
printf("the elements are\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}
return 0;
} 
