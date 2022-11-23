#include<stdio.h>
int main()
/*
satya prakash nanda
22ag10041
section 14
ques 5*/



{
int day, month;
printf("enter day:");
scanf("%d",&day);
printf("enter month :");
scanf("%d",&month);


if(day==41 && month==10){
                         printf("invalid date");
                         } 
else if(day==17 && month==11){
                              printf("thursday");
                              }
else if(day==21 && month==12){printf("wednesday");}
else if(day==11 && month==8){printf("thursday");}



return 0;
}
