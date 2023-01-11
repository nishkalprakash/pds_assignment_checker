/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:8
Discription :To find substring which are palindrome


*/
#include<stdio.h>
int palindrome(char arr[],int s,int e)
{
	int flag=0; 
	if(s==e)
		return 0;
	for(int i=0;i<=(e-s);i++)
		{
			if(arr[i+s]==arr[e-i])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	if(flag==1)
		return 1;
	else
		return 0;
}
int stlen(char arr[])
{
	int count=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[30];
	int n;
	scanf("%s",arr);
	n=stlen(arr);
	for(int i=0;i<=n-2;i++)
		{
		for(int j=i+1;j<n-1;j++)
		{
			{
			if(palindrome(arr,i,j)==1)
				{
					for(int p=i;p<=j;p++)
						printf("%c",arr[p]);
				}

			}
			
		}
		printf("\n");
	}
	return 0;
}

				
	
