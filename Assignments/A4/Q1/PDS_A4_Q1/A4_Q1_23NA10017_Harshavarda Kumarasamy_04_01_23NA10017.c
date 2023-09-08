//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>
#include <stdio.h>

int main()
{
  int km, hr, hrfee, kmfee;

  printf("Enter the distance(in km) travelled:\n");
  scanf("%d", &km);

  printf("Enter the time( in hrs) the taxi has been rented:\n");
  scanf("%d", &hr);

  if(km<=8)
    {kmfee=20;
	}
  else if(km<=12)
    {kmfee=20+10*(km-8);
	}
  else if(km<=16)
    {kmfee=60+8*(km-12);
	}
  else if(km<=20)
    {kmfee=92+6*(km-16);
	}
  else
    {kmfee=116+5*(km-20);
	}
  if(hr<1)
    {hrfee=0;
	}
  else if(hr<=12)
    {hrfee=200;
	}
  else if(hr<=24)
    {hrfee=500;
	}
  else
    {if(hr%24==0)
	{hrfee=500+300*(hr-24)/24;
	    }
      else
	{hrfee=500+300*((hr-24)/24+1);
	    }
    }
  printf("The total fee is %d Rs", kmfee+hrfee);

  return 0;

}

  

  

  
