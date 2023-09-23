 #include <stdio.h>
 int main()
 {
  int age;
  int month;
  printf("enter the age in months \n");
  scanf("%d",&month);

  age = month /12;

  printf(" age in year %d",age);
  // printf(" integer part of a number is %d",(int)num);
 return 0;
}