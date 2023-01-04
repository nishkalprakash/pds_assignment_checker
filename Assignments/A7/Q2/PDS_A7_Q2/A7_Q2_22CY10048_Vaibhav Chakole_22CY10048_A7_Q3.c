/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 7
Description : finding array elements appearing m times
*/
#include<stdio.h>
int main()
{
int m,n,count=0,condition=1,a[100]; //declared array of given length
printf("Enter array size : \n");
scanf("%d",&n);
printf("Enter array elements \n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter m\n"); //input the value you want to search a number for
scanf("%d",&m);
for(int i=0;i<n;i++)
{
	for(int j=i;j<n;j++)
	{
		if((a[j]==a[i]))
		{ 
		   count++; //to find how many times the number appears
		}
	}
        if(count==m) //check whether the element appears m times or not and print the element if it does
	{
	  printf("%d ", a[i]);
	  condition=0;
 	}
count=0; //reset count
}

if(condition==1) //condition is test case to find loop runs or not
{
printf("NO element ");
}
printf("Appears %d times ",m);
return 0;
}
