/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 4
   Description : Program  to calculate factors of a number
*/
#include<stdio.h>
int main()
{
	int num,i;int k=0;
	printf("Enter a no from -9999 to 9999:" );//Taking input from user
	scanf("%d",&num);
	if(num>0){
	for(i=1;i<=num;i++)//For positive numbers
	{
		if(num%i==0){
			printf("%d ",i);
		} else{
			continue;
		}

		
	}
}
else if(num==0)
{
	printf("%d",k);
} 
else{
	for(i=1;i<=(-1*num);i++)//For negative numbers
	{
		if(num%i==0){
			printf("%d ",i);
		}
}
}
return 0;
}
