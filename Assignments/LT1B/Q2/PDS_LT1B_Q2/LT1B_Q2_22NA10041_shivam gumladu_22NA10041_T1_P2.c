#include<stdio.h>  	//standerd io header file
int main(){
int x;			//x is an integer value
printf("enter the input value:");

scanf("%d",&x);		//enter the value of x

for (int i = 1; i < x; ++i){     //this is an outer for loop
	printf("%d/n",i);}
for (int i = 1; i < x; ++i)   //this is a nested inner for loop
{
	printf("%d/n",i);}		
}





return 0;					//the code ends here
}