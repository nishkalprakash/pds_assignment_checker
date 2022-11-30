#include <stdio.h>
int main ( )
{
  
 int i,number,factor;
 printf("please enter the number");
 scanf("%d",&number);
 printf("factors are");
 
 for(i=1; i<=number; ++i)
 {
   factor=number%i;

  if (factor==0)
  {
    printf("%d ",i);
  }
 }  
return 0;
}
