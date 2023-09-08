// roll- 23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,x,min=6001,num,sum=0,y;
  for(i=1;i<=20;i++){
    printf("%d\n", x=5000+rand()%1000);
    y=x;
    while(x!=0){
      sum=sum+ x%10;
      x=x/10;
      printf("the sum of digit is %d\n", sum);
    }
    while(sum<min){
      min=sum;
    }
    sum=0;
  }
  printf("the minimum of the sum is %d",min);
    return 0;
  }
      
      
