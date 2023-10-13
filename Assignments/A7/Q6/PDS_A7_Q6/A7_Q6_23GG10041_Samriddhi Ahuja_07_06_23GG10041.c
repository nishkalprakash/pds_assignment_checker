//roll: 23GG10041
//name: Samriddhi Ahuja
#include <stdio.h>

int main()
{
  int roll[10],i,j;
  float cg[10],avg, sum=0;
  for(i=0;i<10;i++)
    { printf("roll:\n");
  scanf("%d", &roll[i]);
  printf("cgpa:\n");
  scanf("%f", &cg[i]);
  sum+=cg[i]; }
  avg = sum/10;
  printf("avg cg=%f\n", avg);
  for(i=0;i<10;i++)
    {for(j=0;j<10;j++)
	{if(j>i&&cg[i]==cg[j])
	    { printf("roll:%d  cg:%d\n",roll[i],cg[i]);
	      printf("roll:%d  cg:%d\n",roll[j],cg[j]);
	    }
	}
    }
  return 0;
}
	  

  
  
