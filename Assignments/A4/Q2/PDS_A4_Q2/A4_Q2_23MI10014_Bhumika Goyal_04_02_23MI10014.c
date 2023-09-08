//Bhumika Goyal
//23MI10014


#include<stdio.h>
#include<stdlib.h>

int main(){


int number,i,max=0;

for( i=1;i<=20;i++){
  number=rand()%100+1;
  printf("%d\n",number);
 
  if(number>max){
    max=number;
 }
 }
  printf("max=%d",max);
 

return 0;
}
