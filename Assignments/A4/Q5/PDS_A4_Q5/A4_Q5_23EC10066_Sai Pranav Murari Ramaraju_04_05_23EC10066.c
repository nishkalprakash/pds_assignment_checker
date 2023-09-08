#include<stdio.h>
int main(){
  int num,sum=0,d,l2=0,l=0;
  printf("enter a number: ");
  scanf("%d",&num);
  while(num!=0){
    d=num%10;
    sum+=d;
    num=num/10;
    if(d>=l){
      l=d;
    }
    else if(d>=l2&&d<=l){
      l2=d;
    }
  }
  printf("sum of digits = %d\n",sum);
  printf("largest =%d",l);
  printf("second largest =%d\n",l2);
  return 0;
    
    
}
