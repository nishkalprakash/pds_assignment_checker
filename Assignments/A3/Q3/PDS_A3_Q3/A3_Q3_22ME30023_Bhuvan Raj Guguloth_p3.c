#include<stdio.h>
int main()
/*
 section 14
 roll number: 22ME30023
 NAME: G.Bhuvan RAJ
 Description : 
*/
{ float x,y;
  printf("enter the operands: ");
  scanf("%f %f",&x,&y);
  char c;
scanf("%c",&c);
if(c='+'){
 printf("%f", x+y);
}
else

if(c='-'){
 printf("%f", x-y);
}
else

if(c='*'){
 printf("%f",x*y);
}
else

if(c='/'){
 printf("%f",x/y);
}
else
 
return 0;
} 
