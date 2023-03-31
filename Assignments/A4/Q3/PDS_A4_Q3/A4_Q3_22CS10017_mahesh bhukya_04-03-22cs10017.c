/*
section 2
22cs10017
Bhukya Mahesh
assignment no 4
description :
           */
#include<stdio.h>
int main()
{

   int i,j,k,l,n;
printf("Enter LIMIT: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=i;k<=n-1;k++)
printf(" ");
for(j=1;j<=i;j++)
printf("%d",j);
for(l=i-1;l>=1;l--)
printf("%d",l);
printf("\n");


}





    return 0;
}
