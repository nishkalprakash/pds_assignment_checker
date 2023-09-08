#include<stdio.h>
int main()
{
  int a,b,c,d;
  do{ printf("enter a single digit number\n");
    scanf("%d",&a);
    if(a==5){printf("enter a single digit number\n");
      scanf("%d",&b);
      if(b==1){printf("enter a single digit number\n");
	scanf("%d",&c);}
	else break;
	if(c>=0){printf("enter a single digit number\n");
	  scanf("%d",&d);}
	  if(d==7){printf("pattern found\n");}
	  else break;}
	
  }
  while(a>=0);
  return 0;
}
