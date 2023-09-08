#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,i=1,sum=0,m,prev_sum=1000,b,c;
  while(i!=20){a=rand()%6000;
    if(a >=5000){i++;
      printf("%d ",a);
      c=a;
 while(a!=0){
      m=a%10;
      sum=sum+m;
      a=a/10;}
 printf("sum=%d\n",sum);
 if(prev_sum>sum){prev_sum = sum;b=c;}}
      sum=0;
  }
    printf("number with smallest sum of digits is=%d",b);
    return 0;
}
