/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Test:1
Question no:3
description:series*/

#include <stdio.h>
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);//accept number
	int i;int j;//i for row number j for column number
        int p=1;//used in printing
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        printf("%d ",p);//prints p
	        p++;//increases by 1 after every iteration
	    }
	    printf("\n");//change line
	}
	return 0;
}
