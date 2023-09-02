# include <stdio.h>
int main()
{
  int marks;
  printf("Enter your marks out of 100\n");
  scanf("%d",&marks);
  if(marks>=90){
    printf("GRADE=EX");}
  else if(marks>=80 && marks<90){
    printf("GRADE=A");}
  else if(marks>=70 && marks<80){
    printf("GRADE=B");}
  else if(marks>=60 && marks<70){
    printf("GRADE=C");}
  else if(marks>=50 && marks<60){
    printf("GRADE=D");}
  else if(marks>=35 && marks<50){
    printf("GRADE=P");}
  else{
    printf("GRADE=F");}
  return 0;
}
  
  
    
