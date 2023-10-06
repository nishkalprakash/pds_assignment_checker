// Name : Shine Srivastava
//Roll no. : 23MF3IM17
#include <stdio.h>
#include <stdlib.h>
 int b[30];
int max1=0;
int sum(int a[],int n){
  if(n<0){return 0;}
  return a[n] + sum(a,n-1);
}
int max(int a[],int n){
  
  if(n<0){
    return 0;
  }
  
  else if(a[n]>max1)
    {
    return a[n];
  }
  
  max(a,n-1);
}
int reverse(int m, int n){
  if(m-n>=0){return 0;}
  int c;
  c=b[n];
  b[n]=b[m];
  b[m]=c;
  reverse(m+1,n-1);
}
 
int main()
{
 
  for(int i=0;i<30;i++)
    {
      b[i]=rand()%11 + 20;
      // printf("a[%d] = %d\n",i,b[i]);
    }
  printf("sum = %d\n",sum(b,30));
  printf("max = %d\n",max(b,29));
  printf("reverse\n");
  for(int i=0;i<30;i++)
    {
      printf("b[%d] = %d\n",i,b[i]);
    }
  printf("\n");
  reverse(0,29);
   for(int i=0;i<30;i++)
    {
      printf("b[%d]=%d\n",i,b[i]);
    }
}
  
  
