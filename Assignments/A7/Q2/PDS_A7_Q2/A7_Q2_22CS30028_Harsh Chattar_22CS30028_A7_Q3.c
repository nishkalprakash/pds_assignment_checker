/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 7
Description : to find the elements which have the given frequency in an array
*/

#include <stdio.h>

int main()
{
int n;
printf("Enter no. of inputs : ");
scanf("%d",&n);
int arr[n];
printf("Enter the numbers: ");
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
int m;
printf("Enter m : ");
scanf("%d",&m);
int sol[n],c=0;

for(int i=0;i<n;i++)  //using nested loop to itearate through the array to find frequency of each element
{
	int temp = 0;
	for(int j=0;j<n;j++)
		{
			
			if(arr[i] == arr[j])
			{
				temp++;	//counting frequency in temp
			}
		}
	
	if(temp == m) //checking if the frequency of a element is equal to the required frequency.
	{
		sol[c] = arr[i]; //storing the eligible elements in a seperate array
		c++;
	}
}

if(c==0)
{
	printf("NO number appears %d times",m);
}
else{
for(int i=0;i<c;i++)  //printing the eligible elements
{
	printf("%d ",sol[i]);
}
printf("appears %d times.",m);
}



return 0;
}
