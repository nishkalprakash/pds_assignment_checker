/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 5
Description : Program to find the number of pair of numbers co-prime in an array
*/

#include<stdio.h>

void CoPrime(int a,int b)
{
	int temp = b%a;
	
	while(temp > 0){
		temp = b%a;
		if(temp == 1){
			printf("%d and %d are Co-Prime\n",a,b);
			break;
		
		b = a;
		a = temp;
		
		}
		else
			printf("No Co-Prime found.\n");
		break;
	}			
}

int main()
{
	int array[5],num,i;
	for(i = 0;i < 5;i++){
		printf("Enter integer no%d:",i+1);
		scanf("%d",&num);
		array[i] = num;
	}
	for(i = 0;i < 4;i++){
			CoPrime(array[i],array[i+i]);
	}
	return 0;	
}
