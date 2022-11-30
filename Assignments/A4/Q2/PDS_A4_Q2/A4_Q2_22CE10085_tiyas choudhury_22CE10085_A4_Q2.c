/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 4
   Description : Program  to find sum of digits
*/
#include<stdio.h>
int main()

{
	int num;int sum = 0;
	printf("Enter a number from -9999 to 9999:" );//Taking input from user
	scanf("%d",&num);
	
	
		while(num!=0){
		int s=num%10;
		sum+=s;
		 num=num/10;}
		printf("%d",sum);//printing sum of digits
	
	return 0;

	}

