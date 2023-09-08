// swarup jayaram dhanavade
//23MI10052

#include<stdio.h>

int main()
{ int x, sum=0,y,z, max=0;
  printf("enter number:");
 scanf("%d", &x);
  for(int i=x; i>0;i/=10){
    y=i%10;
    sum =sum + y ;
    if(y>max){
      z=max;
      max=y;
    }
    if (y<max && y>z) z=y;
  }
  

  printf("sum= %d ",sum);
  printf("max1= %d ", max);
  printf("max2= %d",z);
  return 0;
}
