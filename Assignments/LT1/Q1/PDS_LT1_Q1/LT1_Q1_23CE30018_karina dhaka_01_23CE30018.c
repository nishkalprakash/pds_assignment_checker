//Roll No:<23CE30018>
//Name:<Karina Dhaka>
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  int r,i, a ,temp;
  
  for(i=0;i<=9999;i++){
  r=n%10;
  r=r+1;
  a=a*10+r;
  
  n=n/10;
  }
  
  
  temp=a;
  n=temp;
  a=n;
  
 
  printf("encoded:%d",n);
  
  
  return 0;
}
