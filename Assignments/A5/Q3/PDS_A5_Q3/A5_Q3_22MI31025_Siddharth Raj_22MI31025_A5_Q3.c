/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:5
description:guessing game*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
        srand(time(0));
	int r;//declared r which stores random number
	int g[5];
	r=rand()%100+1;
	int i;//loop control variable
	int flag=0;//used to skip printing loser if guess was correct
        printf("Input guesses:");
	for(i=0;i<5;i++)
	{
	     scanf("%d",&g[i]);//accept input from user
	    if(g[i]==r)
	    {
	       printf("Winner\n");//if guess is correct printing winner and get out of loop
	       flag=1;
	       break;
	    }
	    else if(g[i]>r)//condition to check whether guess is greater 
	    {
	        printf("Your guess is too big\n");
	    }
	    else if(g[i]<r)
	    {
	        printf("Your guess is too small\n");
	    }
	}
	if(flag==0)
	{
	    printf("Loser.The number was %d \n",r);
	}
}
