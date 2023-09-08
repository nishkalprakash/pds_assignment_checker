//Roll No. : 23MF3IM17
//Name: Shine Srivastava

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num,n2,min=0,sum,i;
  for(i=1;i<=20;i++){
  num = rand()%1000 + 5000;
  printf("The number:%d\n",num);
   while(num>0){
    n2=num%10;
    sum=sum+n2;
    num=num/10;
      }
   printf("sum=%d\n",sum);
     if(min>sum){sum=min;}
  }
  printf("min = %d",min);
}
  

