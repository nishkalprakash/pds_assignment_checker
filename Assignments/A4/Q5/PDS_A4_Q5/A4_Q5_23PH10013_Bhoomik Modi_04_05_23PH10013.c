// Name : Bhoomik Modi
// Roll_no.: 23PH10013
#include <stdio.h>
int main(){//Begining of function
	int num,i=0,sum = 0,n,first_largest=0,second_largest=0,d;
	printf("Enter the number : ");
	scanf("%d",&num);
	n=num;// dummy varibale
	while(n!=0){// Beinning of loop
		d=n%10;
		sum+=d;
		n/=10;
		if (i==0){
			second_largest=first_largest=d;
		}
		if (d>first_largest){
			second_largest=first_largest;
			first_largest=d;
		}
		++i;// To check the count of iterations
	}// end of loop
	if(i==1||i==0){// If it's a single digit number
		second_largest=0;
	}
	printf("The sum of digits are %d and largest digit is %d and the second largest digit is %d\n",sum,first_largest,second_largest);
return 0;
}// end of function
