//name: PILLI ASISH CHANDAN
//R:NO: 23ME30039

#include<stdio.h>
#include<math.h>

int main()   {
  int a,b,c;
  c=0;
  printf("enter the number");
  scanf("%d",&b);
  int p= b;
  for(int i=1;b>0;i++) {
    a= b%10;
    c= c*10 + a;
    b=b/10;

  }

  if(c==p){
    printf("the number is palindrome");}
}
  
