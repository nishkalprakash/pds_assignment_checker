/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:7
Discription : To find the k term 

*/
#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size],n,b[size];
	for(int z=0;z<size;z++)
		scanf("%d",&arr[z]);
	scanf("%d",&n);
	for(int i=0;i<size;i++)
	{
		int count=0; 
		for(int j=0;j<size;j++)
		{	
			if(arr[i]==arr[j])
				count++;
		}
		if(count==n)
			b[i]=arr[i];
	}
	for(int i=0;i<size;i++)
		{
			if(b[i]==0)
				continue;
			else
				{
				printf("%d\n",b[i]);
				}		
		}
	
	return 0;
}
	
			

	
