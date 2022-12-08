/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 5
* Description : Program to make a guessing game
*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{ 
int r= rand()%100+1;
printf("%d", r);
//srand(time(0));
int n,i;
for(i=1;i<=6;i++){
if(i<=5){
printf("enter a no.");
scanf("%d", &n);
if(n==r){
printf("Winner");
break;
}
else if(n>r){
printf("your guess is too big!\n");
}
else{
printf("your guess is too small!\n");
}
}
else{
 printf("Loser: The number was :%d",r);
}
}
return 0;
}  
