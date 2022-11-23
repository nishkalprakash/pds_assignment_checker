
#include<stdio.h>

 int main(){

  int value;
  int firstdigit,seconddigit;
  printf("enter the value");
  scanf("%d",&value);

  firstdigit=value/10;
  seconddigit=value%10;
if(firstdigit==2){
 printf("twenty");
}else if(firstdigit==3){
 printf("thirty");
}else if(firstdigit==4){
 printf("forty");
}else if(firstdigit==5){
 printf("fifty");
}else if(firstdigit==6){
 printf("sixty");
}else if(firstdigit==7){
 printf("seventy");
}else if(firstdigit==8){
 printf("eighty");
}else if(firstdigit==9){
 printf("ninety");
}
 
 if(seconddigit==0){
  printf(" ");
}else if(seconddigit==1){
  printf("one");
}else if(seconddigit==2){
  printf("two");
}else if(seconddigit==3){
  printf("three");
} 
}else if(seconddigit==4){
  printf("four");
}else if(seconddigit==5){
  printf("five");
}else if(seconddigit==6){
  printf("six");
}else if(seconddigit==7){
  printf("seven");
}else if(seconddigit==8){
  printf("eight");
}else if(seconddigit==9){
  printf("nine");
}
  
     
  return 0;
}
