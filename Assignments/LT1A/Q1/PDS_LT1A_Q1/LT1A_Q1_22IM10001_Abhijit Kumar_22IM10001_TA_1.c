//Name: Abhijit Kumar 
//Roll no. 22IM10001
//Test Set A
//Topic of question: Print all the perfect numbers less than or equal to N

#include <stdio.h>
int main()
{
int N,n;	// N is our user input number and n is introduced so that we can apply conditions in loop.
printf("Enter the number:- ");
scanf("%d",&N); //Stores the value of N.
if(N<6)	
printf("Invalid Input\n");
else
{
	for(n=6;n<=N;n++)   //loop for checking if a number (here n) is less than N is a perfect number.
		{
		int count=1,sum=0;
		while(count<n)	//Checks if n is divisible by numbers less then it 
			{
				if(n%count==0)
				sum=sum+count;
				count++;
			}

if(sum==n)
	{
	printf("%d  \n",n);	//Prints the value less than N that satisfies the given defination of perfect number.
	}

		}	
}
return 0;
}


