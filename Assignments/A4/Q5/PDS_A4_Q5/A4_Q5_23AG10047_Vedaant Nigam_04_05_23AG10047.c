#include<stdio.h>
int main()
{
  int a,sum=0,m,max=1,secmax=0;
  scanf("%d",&a);
  while(a!=0){m=a%10;
    if(m>max){max=m;}
    else if(m>secmax){secmax=m;}
    sum=sum+m;
    a=a/10;
  }
  printf("sum=%d\n",sum);
  printf("largest=%d and second largest=%d",max,secmax);
  return 0 ;
}
  
