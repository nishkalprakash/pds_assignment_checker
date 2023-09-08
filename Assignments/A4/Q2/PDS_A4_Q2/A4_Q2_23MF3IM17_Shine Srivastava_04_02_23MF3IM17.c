//Roll No. : 23MF3IM17
//Name: Shine Srivastava

#include<stdio.h>
#include<stdlib.h>

int main(){
  int num,i,max=0;
  for(i=1;i<=20;i++){
 num = rand()%100 + 1;
 printf("%d\n",num);
 if(num>max){
   max=num;
 }
  }
  printf("max = %d",max);
 return 0;
}
