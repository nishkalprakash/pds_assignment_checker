/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Lab Test No : 1
Description: to take numbers as input from user and store and display the largest and second largest number of the numbers entered.
*/

#include<stdio.h>

int main(){
	int num,max1=-1,max2=-1,count=1;						//decleration and initialisation of variables
	printf("enter a positive number: ");								
	scanf("%d",&num);								//scanning the number from the user
	while(num>=0){
		if(count==1){						//if only one number is entered then this case is taken for printing value not entered yet
			max1=num;
			printf("Largest number : %d\n",max1);
			printf("Second largest number : Value not yet entered\n");
			count++;							//increasing counter to avoid entering if condtion next time.
		}
		printf("enter a positive number,again: ");
		scanf("%d",&num);							//again taking input from user
		if(num<0){
			break;								//breaking the loop if number entered is negative
		}
		if(num>max1 && max2<num){					//n is greater than max1 and max2 then max2 is assigned value of max1 and max1 of n
			max2=max1;
			max1=num;
		}
		else if(num<max1 && num>max2){			//n is greater than max2 but smaller than max1 then assign max2 value of n and leave max1
			max2=num;
		}
		printf("Largest number : %d\n",max1);
		printf("Second largest number : %d\n",max2);
	}
	return 0;
}
