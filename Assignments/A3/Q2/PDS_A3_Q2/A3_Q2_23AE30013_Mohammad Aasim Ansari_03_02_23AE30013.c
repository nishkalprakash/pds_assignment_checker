#include<stdio.h>
int main(){
  int Mark;
  scanf("%d",&Mark);
  if(Mark>=90){
    printf("EX");
  }
  else if(Mark>=80){
    printf("A");
  }
  else if(Mark>=70){
    printf("B");
  }
  else if(Mark>=60){
    printf("C");
  }
  else if(Mark>=50){
    printf("D");
  }
  else if(Mark>=35){
    printf("P");
  }
  else if(Mark<35){
      printf("F");
  }
  return 0;
}
