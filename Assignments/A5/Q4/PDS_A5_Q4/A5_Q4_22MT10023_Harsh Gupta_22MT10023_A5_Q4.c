/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 5
 Description : Program that gets the user to guess a number in the range [1,100]
*/

#include <stdio.h>								//including the standard input output library
int main()
{
	int n,bin,i,j;								//declaring variables to store number of elements,bins and a loop control variables
	int max,min;
	printf("Enter the number of elements: ");				//prompting the user to give input
	scanf("%d",&n);								//taking the input of number of elements
	int a[n];								//declaring the array
	printf("Enter the elements: ");						//prompting the user to give input
	scanf("%d",&a[0]);
	max = a[0];
	min = a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);						//taking the array elements as input
		if(a[i]>=max){max=a[i];}
		if(a[i]<=min){min=a[i];}
	}
	printf("Enter the number of bins to be created: ");			//prompting the user to give input
	scanf("%d",&bin);							//taking the input
	int x = (max-min+1)/bin;
	int b[bin+1],c=min,f=0;
	for(i=0;i<bin+1;i++)
	{
		c=c+x*i;
		if(i==bin-1){b[i]=c;}
		else if(i==bin){b[i]=max;}
	}
	for(i=0;i<bin;i++)
	{
		f=0;
		printf("bin%d-> ",i+1);
		for(j=0;j<n;j++)
		{
			if(a[j]>=b[i]&&a[j]<b[i+1])
			{
				if((f++)!=0){printf(",");}
				printf("%d ",a[j]);
			}
		}
		printf(" Elems = %d\n",f);
	}
	return 0;								//the int main() will return 0
}
