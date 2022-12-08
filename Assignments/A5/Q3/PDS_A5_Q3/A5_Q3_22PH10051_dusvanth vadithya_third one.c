/* NAME:vadithya dusvanth
   ROOL NO:22PH10051
   SECTION:14
   ASSIGNMENT NO :5
   DESCRIPTION:TO MAKE GUESSING GAME */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    rand(time(0));
    int num=rand()%10+1,check=0;
    for(int i=0;i<10;i++);
}
 {
    int guess;
    scanf("%d",&guess):
    if(guess>num){
    printf("your guess is too big");}
    else if(guess<num){
    printf("your guess is too small");}
    else{
    printf("winner");}
    break;
    
    if(check=1){
    printf("loser:the number was %d",num);
    }
   
  return 0;
 }

