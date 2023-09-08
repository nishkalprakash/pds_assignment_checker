// Ritwik Suresh
// 23EE10056
#include<stdio.h>
int main()
{
  int c1,c2,c3,c4;
  printf("Input non-negative integers:\n");
  while(1){
    scanf("%d",&c1);
    if(c1<0)
      return 0;
    if(c1==5)
      {
	scanf("%d",&c2);
	if(c2<0)
      return 0;
	if(c2==1)
	  {
	    scanf("%d",&c3);
	    if(c3<0)
      return 0;
	    if(c3>0){
	      scanf("%d",&c4);
	      if(c4<0)
      return 0;
	      if(c4==7){
		printf("Pattern found\n");
		return 0;
	      }
	      else
		{
		  c1=0;
		  c2=0;
		  c3=0;
		  c4=0;
		}
	    }
	    else
	      {c1 =0;c2 =0;
		c3=0;
	      }
	  }
	else
	  { c1=0;
	    c2=0;
	  }
      }
    else
      { c1 ==0;
      }
    
  }
    
	
      
}
      
