//tanishq sura
//23CS10071

#include<stdio.h>
#include<stdlib.h>

int main(){
  int x,i,j,sum=0,summin=36;
  for(i=1;i<=20;i++){
    x=(rand()%999)+5001;
    printf("the random no. %d\n",x);
    sum=0;
    for(j=1;x!=0;j++){
      sum= sum + x%10;
      x=x/10;
    }
    j=1;
    printf("the sum of digits is %d\n",sum);
    if(sum<summin)
      summin=sum;
    
  }
  printf("the minimum sum of digits is %d\n",summin);
  return 0;
}
