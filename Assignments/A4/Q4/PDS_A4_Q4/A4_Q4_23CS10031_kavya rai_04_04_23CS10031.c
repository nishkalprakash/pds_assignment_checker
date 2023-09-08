#include<stdio.h>
int main()
{ int a,b,c,e;
 printf("Enter a single digit no. :");
  while(1)
    {
     
      scanf("%d",&a);
      if(a==5)
	{ 
          scanf("%d",&b);
	  if(b==1)
	    { 
	      scanf("%d",&c);
            
	      scanf("%d",&e);
	      { if (e==7)
		  printf("Pattern found.");
                break;
	      }
	    }
	}
    }
}
