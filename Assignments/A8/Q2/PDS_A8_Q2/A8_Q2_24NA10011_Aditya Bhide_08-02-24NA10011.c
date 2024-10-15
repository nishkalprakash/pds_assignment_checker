// Program to read,sort and modify an array 
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include <stdio.h>
#include <math.h>
int main()
{
	int size,min,temp,min_loc,in_loc,in;
	scanf("%d",&size);
	int num[101];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<size-1;i++) //soring algorithm(selection sort)
	{
		min=num[i];
		for(int j=i;j<size;j++)
		{
			if(num[j]<=min)
			{
				min=num[j];
				min_loc=j;
			}	
		}
		if(i!=min_loc)
		{
			temp=num[i];
			num[i]=num[min_loc];
			num[min_loc]=temp;
		}
	}
	scanf("%d",&in);
	in_loc=size;
	for(int i=0;i<size;i++) //to find locaction of where to insert the new number
	{
		if(in<=num[i]){
		in_loc=i;
		break;
		}
	}
	for(int i=size-1;i>=in_loc;i--) //shifting the elements of the array
	{
		num[i+1]=num[i];
	}
	num[in_loc]=in;
	for(int i=0;i<=size;i++)
	printf("%d ",num[i]);
}


