// Roll No. 23ME10063
// Name: Prem Pastagia

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,b,c,d;
  printf("Enter a single digit number:");
  while(1)
    {
     
      scanf("%d\n",&a);
      if (a==5)
	{ printf("Y");
	  scanf("%d\n",&b);
	 
	if(b==1){scanf("%d\n",&c);}
	if(c==0)scanf("%d\n",&d);
	if(d==7)break;
	}
    }


  printf("Pattern found\n");
  
  return 0;
}
