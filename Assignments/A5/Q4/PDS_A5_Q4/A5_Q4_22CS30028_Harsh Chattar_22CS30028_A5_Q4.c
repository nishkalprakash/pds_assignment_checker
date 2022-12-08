/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 5
Description :  divinding a given array into bins
*/

#include <stdio.h>  //including the header file


void binmaker(int arr[],int size,int bin_count,int min,int arr_size)  //function to make bins
{
int a = min,c;  //a represents lower bound in a bin, c is a variable used in making the last bin  
	for(int i=1;i<=bin_count;i++)  //for loop to calculate and print bins
	{
		printf("bin%d --> ",i);  
		int b = a+size-1,count=0;   //b represents the upper bound in cuurent iteration. It is updated after each iteration

		for(int j=0;j<arr_size;j++) 
		{
			if(i==bin_count) c=1;    
			else c=0; 
			if(arr[j]>=a && arr[j]<=(b+c))  //checking for elements withen given bound
				{
				printf("%d  ",arr[j]);  //printing bin elements
				count+=1;
				}

		}
		a = b+1;  //updating lower bounds
		printf("Elements = %d \n",count);   //printing element count in each bin
		}


	}




int main()
{

int n,bin;
printf("Enter array size : " );  //taking array size as input
scanf("%d",&n);
int arr[n];
printf("Enter Array elements : \n");
for(int i=0;i<n;i++)  //taking array elememts as input
{
int temp;
scanf("%d",&temp);
arr[i]=temp;
}
printf("Enter no. of bins : ");  //taking bin count as input
scanf("%d",&bin);

int max=arr[0],min=arr[0];
for(int i=0;i<n;i++)   //finding minimum and maximum values in the array
{
if(arr[i]>=max) max = arr[i];
if(arr[i]<=min) min = arr[i];
}

int diff = max - min,binsize;  //diff represents numeric distance between min and max. It is used in bin size calculation
if(diff%bin!=0) binsize = diff/bin + 1;  //adding 1 because binsize is an integer variable
else binsize = diff/bin;


binmaker(arr,binsize,bin,min,n);  //calling binmaker function
 





return 0;
}

