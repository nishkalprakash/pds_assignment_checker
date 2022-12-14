/*
  Muskan
  Section - 14*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number between 2 to 10:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++)
   {
     printf( "%d\t",i);
   }
printf("\n");
}
return 0;
}

