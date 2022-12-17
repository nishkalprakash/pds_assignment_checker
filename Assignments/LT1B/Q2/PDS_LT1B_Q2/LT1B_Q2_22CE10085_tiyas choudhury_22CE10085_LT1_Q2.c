/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Lab Test 1
   Description : Program  to print the pattern
*/
#include<stdio.h>
int main()
{
	int i;int j;int k;
	printf("Enter an integer between 2 and 10 ");//Input from user
	scanf("%d",&i);
	if(i<2 || i>10){
		printf("Invalid Input");
	}
	else
	{
		for(k=1;k<=i;k++)//For no of lines
		{
			for(j=0;j<k;j++)
			{
				printf("%d",k);//Printing the sequence

			}
printf("\n");//Next Line



		}


	}
	return 0;
}
