#include<stdio.h>
int main()
{
  int s,t,sm,tm,m;
  printf("the distane travelled by the person in kilometers \n");
  scanf("%d",&s);
  if(s<8) {
	    
	     sm=20;
	   }
  else if (s<=12)
	    {
	      
	      sm=s*10;
	    }
  else if (s<=16)
	    {
      
	      sm=s*8 ;
	    }
  else if (s<=20)
	    {
	     
	      sm=s*6 ;
	    }
  else if (s>20)
	    {
	      sm=s*5 ;
	    }
  printf("the time travelled by the person in hours \n");
  scanf("%d",&t);

   if (t<1)
	    {
	      tm=0;
	    }
  else if (t<12)
	    {
	      tm=200;
	    }
  else if (t<24)
	    {
	      tm=300;
	    }
  else if (t>24)
	    {
	      tm=(t/24)*500;

	    }
  printf("the total money should be paid is %d \n",sm+tm);
  return 0;
}
	    
  
	    
	   
	   
