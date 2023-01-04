/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 7
Description : to insert the element in sorted array
*/
#include<stdio.h>
int main()
{
int n,k=0,insert;
printf("Enter the lenght of array\n");
scanf("%d",&n);
int a1[n];
printf("Enter array elements in ascending order \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a1[i]);
	printf("Enter array element to be inserted\n");
	scanf("%d",&insert);
	int a2[n+1];
	for(int j=0;j<n;j++)
	{
	  a2[k]=a1[j];
	  if((j==(n-1))&&a1[j]<insert)
	  {
 	    a2[n]=insert;
            break;
          }
          if((a1[j]<insert)&&(a1[j+1]>insert)) 
	  {
	    k++;
	    a2[k]=insert;
	  }
	 k++;
	}
	if(insert<a1[0]) //to check whether inserted number is less than 1st element
	{
	 a2[0]=insert;
		for(int i=1;i<=n;i++) 
  		{
		a2[i]=a1[i-1];
		}
	}
	printf("Input array \n");
	for(int i=0;i<n;i++)
	{
	printf("%d ",a1[i]);
	}
	printf("\nOutput array \n"); //printing output arrays
	for(int i=0;i<n+1;i++)
	{
	printf("%d ",a2[i]);
	}
	
	printf("\n");
	return 0;
}
