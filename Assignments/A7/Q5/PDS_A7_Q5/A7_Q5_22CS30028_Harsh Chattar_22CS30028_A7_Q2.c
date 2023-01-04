/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 7
Description : Find the no. of out of order elements in agiven array
*/

#include <stdio.h>

int check(int a[],int i,int n)  //function to check for out of order element
{
int count =0;

for(int j=i;j<n;j++)  
	{
	if(a[i] > a[j]){    //checking if the elements present after a[i] are smaller. If Yes then a[i] is an Out of Order Element.
	count++;
	break;
	}
}
	
for(int j=i;j>=0;j--)
	{
	if(a[i] < a[j])	    //checking if the elements present before a[i] are larger. If Yes then a[i] is an Out of Order Element.
		{
		count++;
		break;
		}	
	}
return count;
}


int main()
{
int n;
printf("Enter no. of elements :"); //taking no. of elements as input from th user
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);  //taking array input
}
int count=0;
for(int i=0;i<n;i++)
{
	count += check(arr,i,n); //counting out of order elements
}
printf("Out of Order : %d ",count);

return 0;
}
