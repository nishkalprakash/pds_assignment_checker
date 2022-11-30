#include <stdio.h>

int main(){
int num,sum,r;			//declaration of variables
printf("Enter any integer: ");	//Asks use to input any integer
scanf("%d",&num);		//Reads input 
sum=0;		
while(num!=0){			//Loop will get executed till num is positive
	r=num%10;		//r is the remainder when num is divided by 10
	sum=sum+r;
	num=num/10;		
	
}
printf("%d",sum);		//prints sum of the digits of entered number



return 0;
}
