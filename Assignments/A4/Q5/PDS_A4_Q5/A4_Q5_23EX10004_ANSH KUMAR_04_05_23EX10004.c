//roll no-23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
int main()
{
  int num,sum=0,max=0,secmax=0,num1,x;
  printf("enter the number\n");
  scanf("%d",&num1);
  num=num1;
  for(int i=0;num1>0;i++){
    sum= sum+(num1%10);
    num1=num1/10;
  }
  printf("sum of digits is %d\n",sum);
  while(num!=0){
    x=num%10;
  
  if(x>max){
    secmax=max;
    max=x;
  }
  else if(x<max&&x>secmax){
    secmax=x;
  }
  else{
    num=num/10;}
  }
  printf(" the largest digit and second largest is %d and %d \n",max,secmax);
  return 0;
}
 
  
  
