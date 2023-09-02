#include<stdio.h>
int main(){
  int marks;
  printf("Enter the marks to grade \n");
  scanf("%d",&marks);
  if(marks>89&&marks<101)
    printf("grade EX");
  else if(marks>79)
    printf("grade A");
  else if (marks >69)
    printf("grade B");
  else if(marks>59)
    printf("grade C");
  else if( marks>49)
    printf(" grade D");
  else if (marks>34)
    printf("grade P");
  else if(marks<35&& marks>-1)
    printf("grade F");
  else
    printf("Marks less than 0");
   
  return 0;
}
