#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,rn,b,s=0,min=32,minn;
  for(i=0;i<20;++i){
    b=(rand() % 1000)+5001;
    rn=b;
    while(rn!=0){
      j=rn%10;
      s+=j;
      rn/=10;
    }
    printf("%d, sum of digits:%d\n",b,s);
    if(s<min){
      min=s;
      minn=b;
    }
    s=0;
}
  printf("The number with minimum sum of digits:%d",minn);
  return 0;
}
    
