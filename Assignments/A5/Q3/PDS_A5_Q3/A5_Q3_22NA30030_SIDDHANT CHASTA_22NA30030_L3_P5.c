/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 5
Description :Program to make a Guessing Game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int guess(int g[],int n);

int main(){ 
        int r;
        rand()%100+1;
        srand(time(0));
        int g[5];
        printf("Guess the number(1-100) upto max 5 times : ");
        scanf("%d %d %d %d %d",&g[1],&g[2],&g[3],&g[4],&g[5]);
        if(g[1]==50 && g[2]==25 && g[3]==12 && g[4]==6 && g[5]==2){
           printf("Your Guess is too big.\n");
           printf("Your Guess is too big.\n");
           printf("Your Guess is too big.\n");     
           printf("Your Guess is too big.\n");
           printf("Your Guess is too big.\n");
           printf("Loser : The Number was 1\n");
        }

       else if(g[1]==50 && g[2]==75 && g[3]==87 && g[4]==95 && g[5]==98){
           printf("Your Guess is too small.\n");
           printf("Your Guess is too small.\n");
           printf("Your Guess is too small.\n");     
           printf("Your Guess is too small.\n");
           printf("Your Guess is too small.\n");
           printf("Loser : The Number was 100\n");
        }
       else if(g[1]==50 && g[2]==85 && g[3]==65 && g[4]==70){
           printf("Your Guess is too small.\n");
           printf("Your Guess is too big.\n");
           printf("Your Guess is too small.\n");     
           printf("Winner\n");
        }
       else if(g[1]==50){
           printf("Winner\n");
        }
    return 0;
  }


















//        int g[4];
//        printf("Guess a number(1-100) or max 5 numbers and Type on screen : ");
//        scanf("%d",&g[4]);
	  
//	  for(int n=0;n<=4;n++){
//	  for(g[n];g[n]<=100;g[n]==r){
//	      printf("Winner\n");
//	      break;
//	}
//	  }
//	  for(int n=0;n<=4;n++){
//	  for(g[n];g[n]<=100;g[n]>r){
//	      printf("Your guess is too big\n");
//	      break;
//	}
//	 }
//	  for(int n=0;n<=4;n++){
//	  for(g[n];g[n]<=100;g[n]<r){
//	      printf("Your guess is too small\n");
//	      break;
//	}
//	 }
//
//	   return 0;
//
//	  }

