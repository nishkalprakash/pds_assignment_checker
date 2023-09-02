#include<stdio.h>
int main(){
  int Mark;
  printf("Enter the marks obtained:\n");
  scanf("%d",&Mark);
  if(Mark>=90){
    printf("Grade=EX");
  }
  else if(Mark>=80){
    printf("Grade=A");
  }
  else if(Mark>=70){
    printf("Grade=B");
  }
  else if(Mark>=60){
    printf("Grade=C");
  }
  else if(Mark>=50){
    printf("Grade=D");
  }
  else if(Mark>=35){
    printf("Grade=P");
  }
  else{
    printf("Grade=F");
  }    
  return 0;
} 
