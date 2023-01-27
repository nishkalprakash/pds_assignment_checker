/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 10
Question No. : 1
Description : CUSTOMER BANK ACCOUNT
*/

#include<stdio.h>
#include<string.h>

struct Customer{
	int acc;
	char name[50];//////////////////////////////
	int balance;
};

// struct list {
// int data;
// struct list *next;
// };

int main(){
	struct Customer arr[100];
	int i=0;
	int yono;
	int count=0;
	for(i=0;;i++){
		count++;
		scanf("%d",&(arr[i].acc));
		scanf("%s",&(arr[i].name));
		scanf("%d",&(arr[i].balance));
		printf("Do you want to enter another account details ?\nIf yes, type 1 else type 0 : ");
		scanf("%d",&yono);
		if(yono==0)
			break;
	}
	i=0;
	for(i=0;i<count;i++){
		printf("%d %s %d\n",arr[i].acc,arr[i].name,arr[i].balance);
	}
	return 0;
}