 
#include<stdio.h>
int main()
{
  int marks;
    printf("Enter the Marks of the student:\n");
  scanf("%d",&marks);
  if(marks >= 90)
    {
      printf("The Grade of the student is EX");
}
  else if(marks >= 80)
    {
      printf("The Grade o the student is A");
}  else if(marks >= 70)
    {
      printf("The Grade of the student is B");
} else if(marks >= 60)
    {
      printf("The Grade of the student is C");
} else if(marks >= 50)
    {
      printf("The Grade of the student is D");
} else if(marks >= 35)
    {
      printf("The Grade of the student is P");
}
  else if(marks < 35)
    {
      printf("The Grade of the student is F");
}
  else
    {printf(" Enter valid Marks");}
  return 0;
}
