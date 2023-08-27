//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( )
{
  int age,year;
  //Assignment of age variable to take the age in months and year to convert the age in years
    printf("Enter the age of a person in months\n");
  scanf("%d", &age);
  year= (age/12)+ (age%12) ; 
    printf("Age in years=%d\n",year);
}
  
