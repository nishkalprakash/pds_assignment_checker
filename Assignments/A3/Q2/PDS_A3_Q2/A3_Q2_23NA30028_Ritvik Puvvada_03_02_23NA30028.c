//Roll No:23NA30028//
//Name:Ritvik Puvvada//

#include<stdio.h>
int main()
{
  int Mark;
  printf("Enter your subject marks out of 100:");
  scanf("%d",&Mark);
  if (Mark>=90)
    printf("Grade=Ex\n");
  else if (Mark>=80)
    printf("Grade=A\n");
  else if (Mark>=70)
    printf("Grade=B\n");
  else if (Mark>=60)
    printf("Grade=C\n");
  else if (Mark>=50)
    printf("Grade=D\n");
  else if (Mark>=35)
    printf("Grade=P\n");
  else
    printf("Grade=F\n");
return 0;
}
  
  
