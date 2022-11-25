#include<stdio.h>
int main()
/*
 section 14
 roll number: 22ME30023
 NAME: G.Bhuvan RAJ
 Description : 
*/
{ int day,month;
  printf("enter the day and month: ");
 scanf("%d %d",&day,&month);
if((day>=31) && (month>=12)){
printf("invalid date");
}
switch(day){
case 17:
 printf("thursday");
case 21:
 printf("wednesday");
case 11:
 printf("thursday");
}
return 0;
}
