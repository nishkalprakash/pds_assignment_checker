#include<stdio.h>

int main()
{
  int x,sum=0,n,lar=0,slar=0;
  printf("enter the number=");
  scanf("%d",&x);
  while(x>0){
  n=x%10;
  sum=sum+n;
  x=x/10;
  
  if(n>lar)
    lar=n;
  if((n>slar) && (n!=lar))
    slar=n;
  }
  printf("sum of digit=%d\n",sum);
    printf("largest=%d\n",lar);
      printf("smallest=%d\n",slar);
     
  
  return 0;
}
  
  
  
