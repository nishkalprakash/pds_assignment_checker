/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:4
Discription :To find the sum of digits
*/
#include<stdio.h>
int main()
{	
        int n,sum=0,rem;
	printf("Enter the number");
	scanf("%d",&n);
	if(n<0)
		{
		while(n<0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		
		}
	}
	else
		{
		while(n>0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
			
		}
		}
		printf("The sum of digit is:%d",sum);
		return 0;
}
	
		
