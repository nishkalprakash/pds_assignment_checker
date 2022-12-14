//Program to print pattern based on user input
#include<stdio.h>
int main ()
{
int n,i,j,k=1;
printf("enter the no. of rows you want to print: "); 
scanf("%d",&n);  //Taking input
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",k);
k++;                               
}
printf("\n");
}
return 0;
}
