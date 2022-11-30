#include <stdio.h>
int main()
{
  int a,p,q,Sum=0;
  printf("Enter the number:\n");
  scanf(" %d",&a);

 while(a!=0){
  p=a%10;
  q=a/10;
 Sum+=p;
  a=q;
}
 printf(" sum is = %d",Sum);
 return 0;
}
  	
