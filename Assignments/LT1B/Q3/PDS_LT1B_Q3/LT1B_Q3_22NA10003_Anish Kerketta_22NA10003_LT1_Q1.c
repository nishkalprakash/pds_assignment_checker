/*
 Test-1 Set-B
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No :T1-1
Description :To print the two largest number
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,c=0;										//Declaring and initialsing
	int max1,max2=0,a;									//Declaring and initialsing
	printf("To terminate the code enter a negative number\n");				//instructions for the user
	printf("Enter the values ");								//Instruction for the user to enter values
	for(i=0;i<n;i++)									//Loop
	{	
	scanf("%d",&a);										//READ
	if(a>=0)										//Condition non negative number
	{
		if(i==0)									//special case for 1st input
		{
			max1=a;
			printf("Largest number:%d\n Second Largest number: Value not yet entered\n",max1);	//Write
			c=1;
		}
		else 										//general case for rest of the inputs
		{
			if(a>max1)								//Checking maximum
			{
			max2=max1;								//Updating 2nd max
			max1=a;									//Updating 1st max
			c=2;									//checking variable to be used later (was getting not desired output, so made some changes to get the desired)
			}
			else if(a>max2)
			{
			max2=a;
			c=2;
			}
			
		}
		if(c==2)												
		printf("Largest number:%d\n Second Largest number:%d\n",max1,max2);		//Write
	}
	else
		break;
	}	
	printf("<Program terminates>\n");								//program terminates
		
	
}
	
