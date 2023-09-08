#include<stdio.h>
int main()
{
  int n,i,j,u,m1=0,s=0,m2=0;
  printf("Enter the number\n");
  scanf("%d",&n);
  u=n;
  while((n*10)/10!=0){
    i=n%10;
    s+=i;
    if(i>m1)
      m1=i;
    n/=10;
  }
  while((u*10)/10!=0){
    j=u%10;
    if(j!=m1)
      if(j>m2)
	m2=j;
    u/=10;
  }
  printf("sum of digits: %d \n",s);
  printf("largest= %d , secondlargest= %d",m1,m2);
  return 0;
}
    
    
  
