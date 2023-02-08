/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Lab Test No.:2
Description: Program to print array in reverse order.
*/
 #include<stdio.h>
 #include<stdlib.h>

void print(int n,int c[])       //print in reverse order
{
	if(n==0)
		printf("%d ",c[n]);
	else
	{
		print(n-1,c);
		printf("%d ",c[n]);
	}
} 
void create()          //creating the matrix
{
	int m,n,x=0;
	printf("Enter M:");
	scanf("%d",&m);
	printf("Enter N:");
	scanf("%d",&n);
	int *ptr[m][n];
	int c[m+n];
	for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			ptr[i][j]=(int *)malloc(sizeof(int));
			scanf("%d",ptr[i][j]);
			c[x]=*ptr[i][j];
			x++;
		}
	}
print(x,c);
}


int main()
{
	create();
	return 0;
}