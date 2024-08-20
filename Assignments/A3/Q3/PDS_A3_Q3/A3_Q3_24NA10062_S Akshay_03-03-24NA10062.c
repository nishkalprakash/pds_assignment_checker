/*
Program to input 4 integers from user and check if exactly 2 of them are equal

Name: S.Akshay
Roll No.: 24NA10062
*/

#include <stdio.h>
void main(){
	int a,b,c,d;
	printf("Enter values of a,b,c,d :");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (a==b){
		if(b==c || b==d || c==d){
			printf("NO\n");
			return;
		}
	}else if(b==c){
		if(c==d || c==a || a==d){
			printf("NO\n");
			return;
		}
	}else if(c==d){
		if(d==a || b==d || a==b){
			printf("NO\n");
			return;
		}
	}else if(d==a){
		if(a==b || a==c || b==c){
			printf("NO\n");
			return;
		}
	}else{
		printf("NO\n");
		return;
	}
	printf("YES\n");
}
