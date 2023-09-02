//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int mark;
  printf("enter the mark out of 100:");
  scanf("%d",&mark);
  if(mark>=90){
    printf("grade=EX");
    }
  else if(mark>=80){
    printf("grade=A");
    }
  else if(mark>=70){
    printf("grade=B");
    }
  else if(mark>=60){
    printf("grade=C");
    }
  else if(mark>=50){
    printf("grade=D");
    }
  else if(mark>=35){
    printf("grade=E");
    }
  else{
    printf("grade=F");
    }
  return 0;
}
