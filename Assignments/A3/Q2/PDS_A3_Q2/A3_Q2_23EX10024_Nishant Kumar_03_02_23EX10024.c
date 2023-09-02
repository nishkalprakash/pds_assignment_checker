//Roll No. 23EX10024
//Name Nishant Kumar
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the marks out of 100\n");
  scanf("%d", &num);
  if (num>=90){
    printf("Grade = EX\n");
  }
  else if (num>=80){
    printf("Grade = A\n");
  }
  else if (num>=70){
    printf("Grade = B\n");
  }
  else if (num>=60){
    printf("Grade = C\n");
  }
  else if (num>=50){
    printf("Grade = D\n");
  }
  else if (num>=35){
    printf("Grade = P\n");
  }
  else {
    printf("Grade = F\n");
  }
  return 0;
}
	   
