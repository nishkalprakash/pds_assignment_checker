#include<stdio.h>
int main (){
  int months;
  printf("Enter the age in months");
  scanf("%d",&months);
  if(months%10==0)printf("The age entered is %d years",months/12);
  else printf("The age entered is %d years",months/12+1);
return 0;
}

