//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N,n,x,temp,num,sum=0,smallest=32,least_num;
  for(N=1;N<=20;++N) {
    printf("displaying no:%d\n",N);
    printf("%d\n",num=5000+rand()%1000);
    printf("number=%d\n",num);
    temp=num;
    sum=0;
    while(num!=0){
      x=num%10;
      num=num/10;
      sum+=x;}
    printf("sum of digits=%d\n",sum);
      if(sum<smallest) {smallest=sum;
	least_num=temp;}
    }
   
  }
  printf("The number with least sum of digits=%d\n",least_num);
return 0;
}

