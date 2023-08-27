// Roll_No. : 23PH10013
// Name: Bhoomik Modi
#include <stdio.h>// Invoking the header file
int main(){// creating main function
  int age_in_months;
  printf("Enter the age of a person in months: ");
  scanf("%d",&age_in_months);
  int age_in_years;
  if (age_in_months % 12 == 0){
    age_in_years = age_in_months/12;
  }
  else
    age_in_years = age_in_months/12 + 1;
  printf("The Person is %d years old",age_in_years);
    return 0;
}
