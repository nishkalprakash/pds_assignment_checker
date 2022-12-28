/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:6
Discription : To find the k term of the given series

*/
#include<stdio.h>
int print_term(int k)
{
	if(k<3)
	{
		return k;
	}
	return 3*print_term(k-1)*print_term(k-2)-2*print_term(k-2)*print_term(k-3)+1;
}
int main()
{
	int i,k;
	printf("Enter the number\n");
	scanf("%d",&k);
	if(k<0)
		printf("Invalid input");
	else
	{
		for(i=0;i<k;i++)
			{
				printf("%d\n",print_term(i));
			}
	}
	return 0;
}
