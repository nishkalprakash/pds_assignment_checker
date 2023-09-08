#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,x,y,sum=0,high=6000,low=5000,min=1000,ans,temp;
  for(i=0;i<=20;i++){
    x=(rand()%(high-low+1))+low;
  printf("%d",x);
  temp=x;
  sum=0;
  while(x){
    y=x%10;
    x=x/10;
    sum=sum+y;
  }
  printf("Sum of digits is %d\n",sum);
  if(sum<min)
    {
      min=sum;
      ans=temp;
    }
  }
  printf("The number having smallest sum of digits is %d",ans);
  return 0;
}
    
  
