/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 5
 Description : Program to make a game of guessing number
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){
      srand(time(0));
      int r=rand()%100+1;		//random number stored in r
      int flag=0; 
      for (int i=0;i<5;i++){
           int g;
           scanf("%d",&g);          //taking input from the user
           if (g==r){
                printf("Winner");
                flag=1;            //As soon as g=r flag becomes 1 and loop breaks
                break;
	   }
           else{
	        if(g>r){
                    printf("Your guess is too big\n");
                }
                else{
                    printf("Your guess is too small\n");
                }
           }
     }
     if(flag!=1){
          printf("Loser: The number was %d",r);
     }
}
              
