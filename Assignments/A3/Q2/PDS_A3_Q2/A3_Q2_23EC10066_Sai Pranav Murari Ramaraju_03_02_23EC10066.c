#include<stdio.h>
int main(){
  int mark ;
  printf("enter mark  :");
  scanf("%d",&mark );
  if(mark>=90){
    printf("Grade = EX\n");
  }
  else if(mark>=80){
    printf("Grade = A\n");
  }
  else if(mark>=70){
    printf("Grade = B\n");
  }
  else if (mark>=60){
    printf("Grade = C\n");
  }
  else if (mark>=50){
    printf("Grade = D\n");
  }
  else if(mark>=35){
    printf("Grade = E\n");
  }
  else {
    printf("Grade = F");
  }

  return 0;
}
