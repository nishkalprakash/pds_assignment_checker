#include<stdio.h>

int main(){
  int n;
  int i;
  int k = 10;
  int z;
  int sum = 0;
  int max = 0;
  int secmax = 0;
  printf("enter a number \n");
  scanf("%d",&n);
  for(i=1;i<7;i++){
    z = n%k;
    if(z>max) max = z;
    else  if(z>secmax&&z<max)secmax=z;
    sum = sum+z;
    n=n/10;
   
  }
  printf("the sum is %d\n",sum);
  printf("the maximum digit is %d\n",max);
  printf("the second max digit is %d\n",secmax);
  return 0;
}
