//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int month, year =0;               // Intiallising variable
  printf("Enter the person's age in months \n");
  scanf("%d",&month);
  if(month%12 == 0){                // Finding age of the person
      year = month/12;
    }
  else{
    year = month/12 + 1;            
    }
  printf("The person is %d years old\n", year);
  return 0;
}
