/*
section 14
assignment 5
22ME10026
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game(int );

int main(){
int num;
srand(time(0));
int a=rand()%100+1;
printf("enter any number 1-100");
scanf("%d"&num);
for (int i=1 ; i<=5;i++){
if (num>100 && num ==a){

{
printf("winner");
}
else if (num >a)
{printf("no is large");
}
else 

 printf("no is small");
}

printf("looser");



}
