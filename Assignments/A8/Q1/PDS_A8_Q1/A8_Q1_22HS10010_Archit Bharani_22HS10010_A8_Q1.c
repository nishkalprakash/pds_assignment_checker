#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the Number of elements in one row ");
scanf("%d",&a);
int b[a][a];
printf("Enter the  elements ");
for(i=0;i<a;i++)
{
for(j=0;j<a;j++){
scanf("%d",&b[i][j]);
}
}
printf("Column Major Order: ");       //Printing Column Major Order
for(j=0;j<a;j++)
{
for(int i=0;i<a;i++)
{
printf("%d ",b[i][j]);
}
}

return 0;
}
