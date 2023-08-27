# include <stdio.h>
int main()
{
  int age,age_yr;
  double b;
  printf("Enter your age in months:\n");
  scanf("%d", &age);
  b= age/12;
  if(age%12==0){
  age_yr=b;
  }
  else{
    age_yr=b+1;
  }
  printf("The age in year is:\n %d", age_yr);
  return 0;
}
