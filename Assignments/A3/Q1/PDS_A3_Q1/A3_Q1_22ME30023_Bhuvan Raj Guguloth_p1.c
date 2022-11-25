#include<stdio.h>
int main()
/*
 section 14
 roll number: 22ME30023
 NAME: G.Bhuvan RAJ
 Description : 
*/
{ int SS,MM,HH;
   printf("input the time in SS:MM:HH ");
   scanf("%d %d %d",&SS,&MM,&HH);
  if((HH<=23 && HH>=0) && (MM<=59 && MM>=0) && (SS<=59 && SS>=0)){
 printf("valid time- %d:%d:%d",HH,MM,SS);
  }
 else {
printf("invalid time");  
 }
return 0;
}
