//Roll No:<23MT10034>
//Name:<N Chandra Siddharth>
#include<stdio.h>
#include<math.h>

int main (){
  int x,n;
  scanf("%d%d",&x,&n);
  int sum=0;
  int max=0;
  int max2=0;
  for(int i=0;i<10;i++){
    x=n%10;
    if(x>max){
      max=x;
    }
    if(max2<x<max){
      max2=x;
    }
    sum=sum+x;
    n=n/10;
  }
  printf("Sum of the digits=%d\n",sum);
  printf("Largest number=%d\n",max);
  printf("Second largest number=%d\n",max2);
  return 0;
}
