#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int s,small=100,smallnum,dig,x,a;
  for(int i=0;i<20;i++)
    {
     s=0;
     x=(rand()%1000+5001);
     a=x;

     while(x>0){
       dig=x%10;
       s+=dig;
       x=x/10;
     }
     printf("%d\n",a);

     if(s<small){
       smallnum=a;
       small=s;
     }
    }
  printf("the smallest sum=%d",smallnum);
  
  return 0;
}
