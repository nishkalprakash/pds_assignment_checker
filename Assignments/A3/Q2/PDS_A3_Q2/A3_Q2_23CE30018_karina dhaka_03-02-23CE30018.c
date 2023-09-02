#include <stdio.h>
int main()
{
  int m;
  printf ("enter the marks:");
  scanf("%d",&m);
  printf("%d\n",m);
  if(m>=90){
    printf("Grade=EX");
  }
    else if (m>=80){
      printf("Grade=A");
    }
  else if (m>=70){
      printf("Grade=B");
    }
  else if (m>=60){
      printf("Grade=C");
    }
  else if (m>=50){
      printf("Grade=D");
    }
  else if (m>=35){
      printf("Grade=P");
    }
  else {
      printf("Grade=F");
    }
  return 0;
}
  
