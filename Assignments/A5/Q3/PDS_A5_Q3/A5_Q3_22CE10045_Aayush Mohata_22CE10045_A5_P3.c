/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:5
Discription :guess the number

*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand(time(0);
	int r=rand()%100+1;
	int n,t=1,j,k=1,v=0;
	printf("Enter the number");
	while(k)
	{
	while(t)
	{		
		if(v==4)
		{	
			t=0;
			k=0;
	
		}
			v++;
			scanf("%d",&n);
			if(n==r)
			{
				printf("Winner");
				t=0;
				
			}
			else
			{ 
				if(n>r)
				{
				printf("your guess is too big\n");
				
				}
				else
				{
					printf("your guess is too small\n");
					
				}
			}
	
	
	}
	}printf("loser the number is%d",r);
	
	return 0;
}


		
		
		
		

