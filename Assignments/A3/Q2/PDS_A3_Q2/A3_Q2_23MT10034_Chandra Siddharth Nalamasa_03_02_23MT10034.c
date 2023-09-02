#include<stdio.h>
#include<cmath>
int main ()
{
  int marks;
  printf("Enter the marks");
  scanf("%d",&marks);
  if(marks<=100 && marks>=90){
  printf("GRADE=EX");
  }
  else if(marks>=80){
    printf("GRADE=A");
  }
  else if(marks>=70){
    printf("GRADE=B");
  }
  else if(marks>=60){
    printf("GRADE=C");
  }
  else if(marks>=50){
    printf("GRADE=D");
  }
  else if(marks>=35){
    printf("GRADE=E");
  }
  else if(marks<=35 && marks>=0){
    printf("GRADE=F");
  }
  else{
    printf("INVALID INPUT");
  }
  return o;
}
  
