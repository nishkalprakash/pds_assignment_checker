// Name:Bhoomik Modi
// Roll_Mo.: 23Ph10013
#include<stdio.h>
#include<math.h>
int main(){// Begining of function
	int num,new_num = 0,n,d,i=0;
	printf("Enter a positive number: ");
	scanf("%d",&num);
	n=num;//A copy variable
	// number of digits
	while(n!=0){		
	++i;
	n/=10;
	}
	n=num;	
	while(n!=0){		//To reverse the number
		d=n%10;
		new_num+= d*pow(10,i-1);
		n=n/10;
		--i;
		}
        if (new_num==num)
		printf("Yes, %d is a palindrom number\n",num);
	else
		printf("No, %d is not a palindrom number\n",num);
	return 0;		
}// end of function
