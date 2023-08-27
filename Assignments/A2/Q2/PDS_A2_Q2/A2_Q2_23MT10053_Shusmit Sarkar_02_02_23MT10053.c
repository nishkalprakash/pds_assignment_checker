#include<stdio.h>
int main()
{
  int x;
  printf("Enter your age in months = ");//If the age 13 years and 2 months it will show 14
  scanf("%d",&x);
  int i = x/12;
  if(x%12 != 0){
    i = i+1;
    printf ("Your age is %d\n",i);
  }
  else {
    printf("Your age is %d\n",i);
  }
  // Shusmit Sarkar
  // 23MT10053
  return 0;
}
    
  
    
  
