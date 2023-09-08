#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("23AG10047\n");
  printf("Vedaant Nigam\n");
  int max=-1,i,a;
  for(i=1;i!=20;i++){a= rand()%100;
  printf("%d\n",a);
  if(a>max){max=a;}
}
  printf("max=%d",max);
return 0;
}
