//name:KARTHIK
//ROLL NO:22EC30027
//SEC 14
//question 1:to print a pattern with numbers after interactively inputing number of rows to be printed


#include<stdio.h>
int main()
{
int n,i,j=0,k,z;
printf("the number of rows for which the pattern is required:");//inputs the number of rows
scanf("%d",&n);
for(i=1;i<=n;i=i++)//for loop for the rows
{
	for(j=0;j<3;j++)
	printf("%d ",j+i);
	printf("\n");
}

return 0;
}

