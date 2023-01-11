#include<stdio.h>
int main()
{
int i,j,a[100][100],x,y,c;
printf("enter number of elements in a row");
scanf("%d",&x);
printf("enter number of elements in a coloumn");
scanf("%d",&y);

printf("enter a matrix");
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("number f elements in one row =%d\n",x);
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
printf("%d",a[i][j]);
}
}
printf("\ncolumn major order:");
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
c=a[j][i];
printf("%d",c);
}
}
return 0;
}



