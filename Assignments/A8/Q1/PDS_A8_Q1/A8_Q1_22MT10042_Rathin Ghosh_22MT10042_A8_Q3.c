#include<stdio.h>
int main()
{
int ord,i,j;
printf("Enter the order of the square matrix : ");
scanf("%d",&ord);
int ar[ord][ord];
printf("Enter the elements of the square matrix in row major order : ");
for(i=0;i<ord;i++)
{
for(j=0;j<ord;j++)
scanf("%d",&ar[i][j]);
}
printf("The array so formed is : \n");
for(i=0;i<ord;i++)
{
for(j=0;j<ord;j++){
printf("%d",ar[i][j]);
printf("  ");
}
printf("\n");
}
printf("The array in column major order :\n");
for(i=0;i<ord;i++)
{
for(j=0;j<ord;j++){
printf("%d",ar[j][i]);
printf("  ");
}
printf("\n");
}
return 0;
}

