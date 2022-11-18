/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp;
		printf("Enter the three digit number... ");
		scanf("%d",&n);

        printf("The reverse number is : ");
		temp = n%10;
		printf("%d",temp);
		temp = n/10;
		temp = temp%10;
		printf("%d",temp);
		temp = n/10;
		temp = temp/10;
		printf("%d",temp);
		return 0;

}
