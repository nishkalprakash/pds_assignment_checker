#include <stdio.h>
int gcd(int m,int n)
{
if(m==0||n==0)
return 0;
if(m==n)
return m;
if(m>n)
return (m-n,n);
else 
return (m,n-m);
}

void Coprime(int a,int b)//using the gcd function to check for coprimeness
{
	if (gcd(a,b)==1)
	printf("%d and %d are Coprime",a,b);
	printf("\n");
}
void pair(int arr[],int size)
{
int i,j;
	
	
 	for (i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
			{
				Coprime(arr[i],arr[j]);
				
			}
			
	}
	
}

int main()
{
	printf("enter the size of the array\n");
	int size;
	scanf("%d",&size);
	int arr[size];
	int i;
	for (i=0;i<size;i++)
	{	
		printf("enter the element");
		scanf("%d",&arr[i]);//taking input of the elements in the array
	}		
	pair(arr,size);
}

