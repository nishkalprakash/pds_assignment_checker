/*
  section           :14
  Roll No.          :22CH10004
  Name              :Admya Maheshwari
  Assignment no .   :5
  Description       :A C program to make a guessing game in which you will get 5                  trials to guess a number
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(0));
int r= rand()%100+1;


for(int i=1;i<=5;i++){
		int a;
		printf("guess a number:");
		scanf("%d",&a);
		
		if (a==r){
		
		printf("winner");
		 break;}
		
		if(a>r) {
			  printf("your guess is too big\n");
			}
		else {  printf("your guess is too small \n"); }
		
		
    			
		if(i==5){
			 printf("loser The number was %d",r);
			}
		
			}
		

		return 0;
			 }
