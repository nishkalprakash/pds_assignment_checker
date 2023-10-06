// Name : Bhoomik Modi
// Roll : 23PH10013
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int sum(int arr[],int n);
int reverse(int arr[], int num1,int num2);
int max(int arr[],int n);
int main()
{
	int arr[30];
	for(int i=0;i<30;i++)
	{
		arr[i]=rand()%11+20;
		printf("%d\t",arr[i]);
	}
	printf("\nSum=%d\n",sum(arr,29));
	reverse(arr,0,29);
	for(int i=0;i<30;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("Maximum is %d",max(arr,29));

}
int sum(int arr[],int n)
{
	if(n==-1)
		return 0;
	else
	{
		return arr[n]+sum(arr,n-1);
	}
}
int reverse(int arr[], int num1,int num2)
{
	int b;
	if(num1>num2)
	{
		return 0;
	}
	else
	{
		b= arr[num1];
		arr[num1]= arr[num2];
		arr[num2]= b;
		reverse(arr,num1+1,num2-1);
	}
}
int max(int arr[], int n)
{
	if(n==0)
	return arr[0];
	else
	{
		int a= arr[n];
		int b= max(arr,n-1);
		if (a>b)
			return a;
		else return b;	
}}
