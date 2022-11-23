#include<stdio.h>

 int main(){
 int day,month;
 printf("enter day and month");
 scanf("%d%d",&day,&month);

 if(day 6==31)
 if( month==12||month==10||month==8||month==7||month==5||month==3||month==1){
 printf("valid date");
 }else{
 printf("invalid date");
 }

  return 0;
 }
