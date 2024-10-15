// Program to find largest number possible
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include <stdio.h>
#include <math.h>
int digits(int n)
{
	if(n<10)
	return 1; //base case
	return 1+digits(n/10);
}
int compare(int a,int b) // it returns 1 when a is lexicographically greater than b
{
	if(a==b)
	return 1;
	int a_dig=digits(a),b_dig=digits(b);
	int s_dig=(b_dig<=a_dig)?b_dig:a_dig;
	for(int i=s_dig;i>=1;i--)
	{
		if(((int)(a/pow(10,a_dig-1)))%10>((int)(b/pow(10,b_dig-1)))%10)
		return 1;
		else if(((int)(a/pow(10,a_dig-1)))%10<((int)(b/pow(10,b_dig-1)))%10)
		return 0;
	}
	if(a_dig<b_dig) //this when we shift to comparing 70 and 86 while comparing 8670 and 86 (when unequal no, of digits in a and b)
	compare(a,b%(int)pow(10,a_dig));
	else
	compare(a%(int)pow(10,b_dig),b);
}
int main()
{
	int size,min,min_loc,temp;
	int n[100];
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&n[i]);
	}
	for(int i=0;i<size-1;i++) //soring algorithm(selection sort)
	{
		min=n[i];
		min_loc=i;
		for(int j=i;j<size;j++)
		{
			if(compare(i,j)==1)
			{
				min=n[j];
				min_loc=j;
			}	
		}
		if(i!=min_loc)
		{
			temp=n[i];
			n[i]=n[min_loc];
			n[min_loc]=temp;
		}
	}
	for(int i=0;i<size;i++)
	printf("%d",n[i]);
}



