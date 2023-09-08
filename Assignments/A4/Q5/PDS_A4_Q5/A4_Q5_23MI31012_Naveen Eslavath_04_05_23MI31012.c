#include <stdio.h>
int main()
{
  int x,n,max=0,max2=0,sum=0;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n){
    x=n%10;
    n=n/10;
    sum=sum+x;
  if(x>max){
    max2=max;
    max=x;
  }
  else if((x>max2)&&(x!=max))
    {
    max2=x;
    }
  }
  printf("sum of the digits=%d\n",sum);
  printf("largest=%d\n",max);
  printf("second largest=%d\n",max2);
  return 0;
}
  
  
