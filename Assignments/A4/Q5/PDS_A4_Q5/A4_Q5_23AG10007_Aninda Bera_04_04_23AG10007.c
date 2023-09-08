#include <stdio.h>
int main()
{
  int d,l=0,sum=0,rem,sl=0,n;
  printf("enter a number:\n");
  scanf("%d",&d);
  int m=d;
  while(d>0){
    rem=d%10;
    sum=sum+rem;
    d=d/10;
    if(rem>l){
      l=rem;}
  }
  printf("sum:%d\n",sum);
  printf("largest:%d\n",l);
  while(m>0){
    n=m%10;
    if(n<l&&n>sl){
      sl=n;}
    m=m/10;}
  printf("second largest:%d",sl);
     return 0;
}
    
  
