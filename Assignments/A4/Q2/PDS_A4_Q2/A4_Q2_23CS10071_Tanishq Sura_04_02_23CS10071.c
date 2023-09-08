//tanishq sura
//23CS10071

#include<stdio.h>
#include<stdlib.h>

int main(){
  int max,x,i;
  max=0;
  for(i=1;i<=20;i++){
    x=(rand()%99)+1;
    printf("%d\n",x);
    if(x>max)
      max=x;
  }
  printf("the maximum number was %d",max);
  return 0;
}
  
