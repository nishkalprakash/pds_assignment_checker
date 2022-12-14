/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: Lab test 1 Q1
Description : to print armstrong numbers
*/
#include<stdio.h>
#include<math.h> //including math library to perform pow function
int main()
{
int j,k,sum=0,count;
long int s,n,i,l;
printf("Enter any number "); // getting input from the user
scanf("%ld",&n);	//long int to get higher values
k=n;
	if(n<0||n==0) //checking whether the input is valid or not
	{
	 printf("Invalid input\n");
	}
	else
	{
	  for(i=1;i<=n;i++)
	  {	 
		s=i;
		while(s>0)
		{
		 j=s%10;
		 count++; //calculating the number of digits in the entered value
		 s=s/10;
		}
		 l=i;
		 while(l>0)
		 {
		 
		 j=l%10;
		 sum=sum+pow(j,count); //calculating the value
		 l=l/10;
		 }
		 if(sum==i)	//checking whether it is equal to the entered value or not
		 {
		 printf("%ld ",i);
		 }
		 sum=0;
	         count=0;
	  }
	}
return 0;
}

