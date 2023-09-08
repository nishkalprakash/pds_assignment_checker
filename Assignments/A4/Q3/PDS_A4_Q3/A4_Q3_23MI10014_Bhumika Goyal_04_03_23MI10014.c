//Bhumika Goyal
//23MI10014

#include<stdio.h>
int main(){
  int number,num1,num2;
  printf("Enter the number:\n");
  scanf("%d",&number);
  num1=0;
  num3=number;
  while(number!=0)
    {
      num2=number%10;
      num1=num1*10+num2;
      number=number/10;
    }
  if(number=num3){
    
  printf("%d",num1);
  return 0;
  
}
