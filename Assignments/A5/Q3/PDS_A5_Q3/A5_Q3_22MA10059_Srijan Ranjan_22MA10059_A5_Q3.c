/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:5
Description: This program takes a pair of numbers and  decides if they are coprime.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int r;
	int g[5];
	r=rand()%100+1;
	int i;
	int flag=0;
	for(i=0;i<5;i++){
		scanf("%d",&g[i]);
		if(g[i]==r){
			printf("Winner\n");
			flag=1;
			break;
		}
		else if(g[i]>r){
			printf("Your guess is too small!\n");
		}
		else if(g[i]<r){
			printf("Your guess is too big!\n");
		}
	}
	if(flag==0){
		printf("Loser:The number was %i\n",r );
	}
	return 0;
}