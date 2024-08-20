/*
Program to check if the entered date is valid or not.

Name: S.Akshay
Roll No.: 24NA10062
*/

#include <stdio.h>
void main(){
	int d,m,y;
	printf("Enter date in DD MM YYYY format:\n");
	scanf("%d %d %d",&d,&m,&y);
	
	if(d<1||m<1||y<1||m>12||d>31){
		printf("Invalid date\n");
		return;
	}
	
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if(d>31){
		 	printf("Invalid date\n");
		 	return;
		}
	}else if(m!=2){
		if(d>30){
			printf("Invalid date.\n");
			return;
		}
	}else{
		if(y%4 != 0){
			if(d>28){
				printf("Invalid date.\n");
				return;
			}
		}else{
			if(y%100 == 0 ){
				if(y%400 == 0){
					if(d>29){
						printf("Invalid date.\n");
						return;
					}
				}else{
					if(d>28){
					printf("Invalid date.\n");
					return;
					}
				}
			}else{
				if(d>29){
					printf("Invalid date.\n");
					return;
				}
			}
		}
	}
	printf("Valid date.\n");
}
