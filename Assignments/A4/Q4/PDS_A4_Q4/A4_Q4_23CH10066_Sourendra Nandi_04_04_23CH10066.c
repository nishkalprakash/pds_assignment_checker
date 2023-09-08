//Name : Sourendra Nandi
//Roll no: 23CH10066
#include <stdio.h>
int main()
{
  int num,i,st1,st2,st3=1,st4;
  for (i=1;1;i++)
    {
      printf("Enter a single digit number : ");
      scanf("%d",&num);
      if (num<0) break;
      if (num==5 && st1+1 !=st2)
	{
	  st1=i;
	}
      else if (num==1 && st1+1 !=st2)
	{
	  st2=i;
	}
      else if(num==7)
	{
	  st4=i;
	  if (st4==(st2 + 2) && st4==(st1+3))
	    {
	      printf("Pattern Found!! \n");
	      break;
	    }
        }
    }
  return 0;
}
	    
	    
      
      
