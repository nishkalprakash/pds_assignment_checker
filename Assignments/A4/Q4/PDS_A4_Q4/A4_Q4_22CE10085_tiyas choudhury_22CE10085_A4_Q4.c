/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 4
   Description : Program  to print the required pattern
*/
#include<stdio.h>
int main()
{
	int line;int i,j;
	printf("Enter the no of lines between 2 and 10: ");//Input from user
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=i;j++){
			if(j%2!=0){
				printf("1");
			} else if(j%2==0){
				printf("0");
			}

			
		}
printf("\n");//New line
	}
	return 0;

}
