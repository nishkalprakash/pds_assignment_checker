//roll no:23CE30018
//name: KarinaDhaka
#include<stdio.h>
int main()
{
  int i,r,x=0,p;
  printf("enter a number:");
  scanf("%d",&i);
  p=i;
  while(i>0){
    r=i%10;
    x=x*10+r;
    i=i/10;
  }
  if(p==i){
    printf("it is a not palindrome.");
  }
  else{
    printf("it is  a palindrome.");
  }
  return 0;
}
    
    
