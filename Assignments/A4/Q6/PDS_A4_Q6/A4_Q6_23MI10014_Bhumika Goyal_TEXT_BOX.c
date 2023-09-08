//Bhumika Goyal
//23MI10014

#include<stdio.h>
#include<stlib.h>
int main (){
  int number,num2,min=0;
  for(i=1;i<=20;i++){
    
    number=rand()%1000+5000;
    printf("Number:%d",number);
    while(number>0){
      num2=number%10;
      sum=sum+num2;
      number=number/10;
    }
    printf("sum=%d",sum);
if(min>sum){sum=,min}
  }
  printf("min=%d",min);
  return 0;
}