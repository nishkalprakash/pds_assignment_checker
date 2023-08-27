//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  int month ; //Declaring the necessary variable
  printf("Enter the age of the person in terms of months(integral value) : "); 
  scanf("%d",&month);  //Taking in the input value from the user
  if ((float)month/12 - month/12 > //Conditioning the output such that it matches that of the output example of the question
      printf("The person is %d years old\n",(int)(month/12)+1); //Printing the age such that if age is in decimal, it gets rounded up 
  else
    printf("The person is %d years old\n",(int)(month/12)); //Printing the age such that if not decimal, it gets printed as it is
  return 0;
}
