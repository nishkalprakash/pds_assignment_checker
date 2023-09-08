#include<stdio.h>
int main(){
  int a,temp,x;
  int sum=0;
  int max=0;
  int smax=0;
  printf("Enter the number:\n");
  scanf("%d",&a);
  temp=a;
  if(a/10==0){
    printf("The largest digit is: %d\n",temp);
    printf("The second largest digit is:0\n");
  }
  while(temp!=0){
    x=temp%10;
    temp=temp/10;
    sum=sum+x;
    if(max<x){
      smax = max;
      max=x;
      
    }
    if(smax<x && x< max){
      smax=x;
    }  
  }
  printf("The sum of digits is: %d\n",sum);
  printf("The largest digit is: %d\n",max);
  printf("The second largest digit is: %d\n",smax);  
  return 0;
}  
