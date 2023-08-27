//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int age_months, age_yrs;
  printf("give age in months\n");
  scanf("%d",&age_months);//took age input in months
  if(age_months%12==0) //checked if age in yrs will be in whole number
    printf("age in yrs is %d", age_months/12);
  else
    printf("age in yrs is %d", age_months/12 +1);//took upper approx if age as float no results
  return 0;
}
