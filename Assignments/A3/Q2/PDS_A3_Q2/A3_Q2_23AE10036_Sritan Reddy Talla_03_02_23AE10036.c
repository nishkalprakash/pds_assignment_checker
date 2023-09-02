//T.Sritan//
//23AE10036//
#include<stdio.h>
int main(){
  int marks;

  printf("enter your marks(0-100)");
  scanf("%d",&marks);
  if ((marks>=90)&&(marks<100)){
    printf("Ex");
}
  else if((marks>=80)&&(marks<100)){
 printf("A");
}
  else if((marks>=70)&&(marks<100)){
 printf("B");
}
 else if((marks>=60)&&(marks<100)){
 printf("C");
}
				   else if((marks>=50)&&(marks<100)){
 printf("D");
}
				   else if((marks>=35)&&(marks<100)){
 printf("P");
}
				   else if ((marks<35)&&(marks<100)) {
   printf("grade=F");
 }
 else
   printf("wrong marks");
  
    return 0;
}
