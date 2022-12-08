#include <stdio.h>
int gcd(int a,int b)//finding the gcd
{
	int temp;
	if(a>b)
	{
		temp = a;
		a= b;
		b = temp;
	}
	while((b%a)!=0)
	{
		temp = b%a;
		b=a;
		a = temp;
	}
	
	return a;
}
void Coprime(int a,int b)//using the gcd function to check for coprimeness
{
	if (gcd(a,b)==1)
	printf("%d and %d are Coprime",a,b);
}
int main()
{
	int i,j;
	int arr[5];//declaring the array
	for (i=1;i<=5;i++)
	{	
		printf("enter the element");
		scanf("%d",&arr[i]);//taking input of the elements in the array
	}		
 	for (i=1;i<=5;i++)//loop to compare the pairs
	{
		for(j=i;j<=5;j++)//i is the starting limit to avoid repetition of pairs
			{
				Coprime(arr[i],arr[j]);
				printf("\n");
			}
	}
	return 0;
}
