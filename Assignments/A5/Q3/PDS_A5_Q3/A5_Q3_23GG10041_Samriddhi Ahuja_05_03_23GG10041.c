//roll no. = 23GG10041
//name=Samriddhi Ahuja
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int roll[10],sum,n,i,j;
  float cg[10],avg;
    printf("enter the number of students=\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {printf("roll no. = \n");
	scanf("%d",&roll[i]);
	cg[i]=rand()%11 + 0;
	printf("cgpa=%lf\n",cg[i]);
	sum+=cg[i];
      }
    avg=(float)sum/n;
    printf("avg cgpa=%lf\n", avg);
    for ( i=0;i<=n;i++)
      {for (j=0;j<n;j++){
	  if (cg[j]==cg[i]&&j>i)
	    {
		printf("%d,%d,",roll[i],roll[j]);
	    }
	}
      }
    return 0;
}
