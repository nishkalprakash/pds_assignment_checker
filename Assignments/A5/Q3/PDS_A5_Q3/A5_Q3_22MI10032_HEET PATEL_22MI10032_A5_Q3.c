/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 5
Description : GAME
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){

srand(time(0));
int flag=0;
int r = rand()%100+1;
for(int i = 0 ; i < 5;i++){
printf("Guess the number between 1-100\n");
int g ;
scanf("%d",&g);

if(g==r){
printf("Winner\n");
flag=1;
break;
}

else if (g>r){
printf("your guess is too big!\n");
}
else if(g<r) {
printf("your guess is too small!\n");
}

}
if(flag!=1)
printf("Loser:The number was %d",r);


return 0 ;
}
