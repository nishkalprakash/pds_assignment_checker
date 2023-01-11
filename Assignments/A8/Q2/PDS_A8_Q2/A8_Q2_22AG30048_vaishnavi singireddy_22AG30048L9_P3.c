#include<stdio.h>
int main()
{
int a[100][100],i,j,x,y;
printf("enter number of elements in a row");
scanf("%d",&x);
printf("enter number of elements in a coloumn");
scanf("%d",&y);

printf("enter a matrix....\n");
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("shape of the 2D array : %d%d",x,y);
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

return 0;
}


