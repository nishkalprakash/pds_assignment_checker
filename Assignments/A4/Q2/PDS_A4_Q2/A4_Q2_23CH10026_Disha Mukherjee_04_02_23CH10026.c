//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,r=0,max=0;
  for(i=1;i<=20;i++)
    {
      r=rand()%100;
      if (r==0)
	r=1;
      if(r>max)
	max=r;
      printf("\n Number : %d",r);
    }
  printf("\nMaximum no input=%d",max);
  return 0;
}

  


  
