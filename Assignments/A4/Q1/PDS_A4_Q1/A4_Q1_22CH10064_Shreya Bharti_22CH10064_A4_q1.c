#include <stdio.h>
int main()
{
int num,num_pos;			//declaration of variables
printf("Enter an integer: ");		//Asks user to enter an integer 
scanf("%d",&num);			//Reads the input from user

for(int i=1; i<=num; i++){		//loop for computing factor of the given number
	if (num%i==0){
		printf("%d ",i);
	}
}

if (num==0){				//if number is 0 then its factor is also 0
	printf("%d", num);
}

if (num<0){
	num_pos= num*(-1);		//calculating factor for negative integer
	for(int i=1; i<=num_pos; i++){
		if (num_pos%i==0){
			printf("%d ",i);
		}
	}
}
return 0;
}
