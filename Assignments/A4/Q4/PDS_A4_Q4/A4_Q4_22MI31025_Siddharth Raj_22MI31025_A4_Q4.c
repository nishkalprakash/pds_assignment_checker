/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:4
description:pattern*/

#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);//accept a number from user basically number of column
	int i;//changes column number
	int j;//changes row number
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=i;j++)//total number of columns is equal to row number
	   {
	       if(j%2==0)//prints zero in even places
	        printf("0 ");
	       else
	        printf("1 ");//prints 1 in odd column number
	   }
	   printf("\n");//change line
	}
    return 0;
}

