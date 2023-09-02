//Roll no:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int marks;
  printf("Enter your marks\n");
  scanf("%d",&marks);
  if(marks>=90)
    printf("Your grade is Ex");
  if(marks>=80 && marks<90)
    printf("Your grade is A");
  if(marks>=70 && marks<80)
    printf("Your grade is B");
  if(marks>=60 && marks<70)
    printf("Your grade is C");
  if(marks>=50 && marks<60)
    printf("Your grade is D");
  if(marks>=35 && marks<50)
    printf("Your grade is P");
  if(marks<35)  
    printf("Your grade is F");
  return 0;
}
  
    
 
