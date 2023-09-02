//Roll No.: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int m=0;                  //User input for marks
  printf("Enter marks obtained out of 100: ");
  scanf("%d",&m);
  if ((m>=0)&&(m<=100))    //Checking if user has given input between 0-100
    {
      if (m>=90)           //Checking conditions for grade 
	printf("Grade obtained in subject: Ex");  //Printing which grade obtained according to marks
      else if (m>=80)
	printf("Grade obtained in subject: A");
      else if (m>=70)
	printf("Grade obtained in subject: B");
      else if (m>=60)
	printf("Grade obtained in subject: C");
      else if (m>=50)
	printf("Grade obtained in subject: D");
      else if (m>=35)
	printf("Grade obtained in subject: P");
      else if (m<35)
	printf("Grade obtained in subject: F");
    }
  else
    printf("Invalid Input");
}
