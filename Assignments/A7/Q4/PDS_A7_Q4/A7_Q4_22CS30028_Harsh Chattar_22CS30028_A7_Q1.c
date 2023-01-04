/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 7
Description : Finding the largest number possible from a given set of numbers where the numbers can be appended ed to each other so that the appended number becomes the largest number.
*/

#include <stdio.h>

int SelectionSort(int a[],int n)  //Selection Sort
{
int max,temp;
for(int i=1;i<n;i++)
	{
		max = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[max]<a[j])
			{
				max = j;
			}
		}
		if(max!=i)
		{
			temp = a[i];
			a[i] = a[max];
			a[max] = temp;
		}
	}

for(int i=0;i<n;i++)
{
	printf("%d",a[i]);
}

}

int main(){

int n,maxS,c=0;
printf("Enter no. of inputs:"); //taking no. of inputs from th user
scanf("%d",&n);
int arr[n],s[n];
printf("Enter the numbers:"); 
for(int i=0;i<n;i++){   //taking array elements as input
		scanf("%d",&arr[i]);
		if(arr[i]%10 == arr[i])
			{
			s[c] = arr[i]; //making a seperate array to store single digit numbers
			c++;
			}
	}
int maxSindex = 0;
for(int i =0;i<c;i++) 
{
	if(s[maxSindex] < s[i])
	{
		maxSindex = i;
	}
}
int index;
for(int i =0;i<n;i++)   //finding the index of the largest single digit number  in the array
{
	if(s[maxSindex] == arr[i])
	{
		index = i;
	}
}
printf("index = %d\n",index);
printf("maxSindex = %d\n",maxSindex);
int temp = arr[0];  //swaping the first element with the largest single digit number in the array
arr[0] = s[maxSindex];
arr[index] = temp;

SelectionSort(arr,n); //using selection sort to sort the remaining elements


return 0;
}

