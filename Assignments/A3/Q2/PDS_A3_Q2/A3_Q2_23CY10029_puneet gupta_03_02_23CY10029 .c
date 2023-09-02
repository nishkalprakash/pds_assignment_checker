#include <stdio.h>

int main ()
{
 int a ; 
 
 printf("enter your marks in integer \n");
 scanf("%d", &a);
  if(a>=90){printf("grade=EX");
  }
  else if(a>=80){printf("Grade=A");
  }
  else if(a>=70){printf("Grade=B");
  }
  else if(a>=60){printf("Grade=C");
  }
  else if(a>=50){printf("Grade=D");
  }
  else if(a>=35){printf("Grade=P");
  }
  else {printf("Grade=f");}
	     
  
  return 0;
}
