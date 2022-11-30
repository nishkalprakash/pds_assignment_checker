/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 4
Discription : To get the reverse number 
*/
#include<stdio.h>
int main()
{
	long int n, s, r;
	scanf("%ld", &n);
		while(n>=1){
		s=0;
		r=n%10;
		n=n/10;
		s = s + r;
		switch(s){
	case 1:
		printf("one ");
		break;
	case 2:
		printf("two ");
		break;
	case 3:
		printf("three ");
		break;
	case 4:
		printf("four ");
		break;
	case 5:
		printf("five ");
		break;
	case 6:
		printf("six ");
		break;
	case 7:
		printf("seven ");
		break;
	case 8:
		printf("eight ");
		break;
	case 9:
		printf("nine ");
		break;
		}
}
return 0;
}
