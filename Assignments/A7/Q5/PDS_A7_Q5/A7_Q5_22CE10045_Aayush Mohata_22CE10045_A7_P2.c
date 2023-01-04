/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:7
Discription : To count out of order number 

*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],a=0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
		{
		int m=0;
		for(int j=0;j<n;j++)
		{
			if(j>i){
				if(arr[j]<arr[i])
				m=1;
			}
			else if(j<i){
				if(arr[i]<arr[j])
					m=1;
				}
			if(m==1)
				{
				a++;
				break;
			}

		}
	}
	printf("%d",a);
	return 0;
}
	
				
			
