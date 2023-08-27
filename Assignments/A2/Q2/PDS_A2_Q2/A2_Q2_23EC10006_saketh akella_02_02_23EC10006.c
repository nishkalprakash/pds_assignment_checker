#include<stdio.h>

int main(){
  int age;
  printf("this program is to give the age of person in years if age of the person  is given in months \n");
  scanf("%d",&age);
  int age_in_years = age/12;
  int age_in_months = age%12;
  if(age_in_months==0){
  printf("the age in years is %d \n",age_in_years);
  }
  else printf("the age in years is %d \n",age_in_years+1);
  printf("the true age is %d years and %d months \n",age_in_years,age_in_months);
  return 0;

}
