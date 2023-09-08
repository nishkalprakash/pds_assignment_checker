#include <stdio.h>
//ROLL: 23IM10008
//NAME:AYUSH KUMAR
int main(){
  int marks;
  printf("Enter the marks :");
  scanf ("%d", &marks);
  if (marks>=90){
    printf("Grade=EX");
  }
  else if (marks>=80){
    printf("Grade=A");
  }
  else if (marks>=70){
    printf("Grade=B");
  }
  else if (marks>=60){
    printf ("Grade=C");
  }
  else if (marks>=50){
    printf ("Grade=D");
  }
  else if (marks>=35){
    printf("Grade=P");
  }
  else{
    printf("Grade=F");
  }
  printf("\n");
  return 0;
}
  
  
