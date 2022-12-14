/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Question No:1
Discription :To print the pattern 

*/
#include<stdio.h>
int main()
{
	int n,i,j;
	// declering the variables
	printf("Enter the value of n in [2,10]\n");
	scanf("%d",&n); 
	/*Reading the value of n*/
	if((1<n)&&(n<11))
	/*Bounding the value of n in range of [2,10]   */
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",i); 
			}
			printf("\n");
		}
	}
	return 0;
}
