#include<stdio.h>
int main()
{
  printf("23AG10047\n");
  printf("vedaant nigam\n");
  int num,rev=0,m,a;
  scanf("%d",&num);
  a=num;
  while(num!=0){m=num%10;
    rev=rev*10 + m;
    num=num/10;
  }
  if(rev==a){printf("its a palindome");}
  else printf("its not a palindome");
  return 0 ;
}
    
