/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 4
Discription : To find the factors of a number 
*/
#include<stdio.h>
int main()
{	
	int i, n=1, j;
	scanf("%d", &i);
	printf("The factors of %d are \n", i);
	if(i>0){
	while(n<=i){
		if(i%n==0){
		printf("%d \n", n);
		}
	n++;
	}
}
	else{
	j=(-1)*i;
	while(n<=j){
		if(j%n==0){
		printf("%d \n", n);
		}
	n++;
	}

	}	
return 0;
}
