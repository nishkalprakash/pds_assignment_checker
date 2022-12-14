/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Lab Test No : 1
Description:To Print all the armstrong number smaller than given number
*/

#include<stdio.h>					//including standard input output header file
#include<math.h>					//including math.h header file

int armstrong(int n){
	int rem1,rem2,num=n,count=0,sum=0;		//decleration of remainder,count and sum variables of integer type

	
	while(num!=0){					//running a while loop to calculate the number of digits in the number
		rem1=num%10;
		num=num/10;
		count++;
	}
	int n1=n;
	while(n1!=0){					//calculating the armstrong sum using another while loop
		rem2=n1%10;
		sum+=pow(rem2,count);			//pow function used from math.h header file
		n1=n1/10;
	}
	if(sum==n){					//checking if armstrong sum is equal to number given then the number is returned
		return n;
	}
	else{						//else returning -1
		return -1;
	}
}

int main(){						//main function
	int a;
	printf("enter a number: ");
	scanf("%d",&a);					//taking integer number as input from user
	if(a<=0){					//checking if the number entered is less than or equal to 0
		printf("Invalid Input\n");              //if yes print invalid input and exit
		return 0;
	}
	for(int i=1;i<=a;i++){				//running a for loop for checking armstrong condition for numbers from 1 to a(user inputted)
		int x=armstrong(i);
		if(x==-1){
			continue;			//continuing to next iteration if given number is not armstrong number else printing the number
		}
		printf("%d ",i);
	}
	printf("\n");

	return 0;
}

