//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>

int main()
{
  unsigned int i,j,n,rn[10],t1,t2;
  float cg[10],avg=0.0,s=0.0;
  printf("enter the no of students\n");
  scanf("%u",&n);
  printf("\nenter roll no.s");
  for(i=0;i<n;i++)
    scanf("%d",&rn[i]);
  printf("\nenter cgpa");
  for(i=0;i<n;i++)
    scanf("%f",&cg[i]);
  printf("\n[");
  for(i=0;i<n;i++)
    printf("%d,",rn[i]);
  printf("]\n");
  printf("[");
  for(i=0;i<n;i++)
    printf("%f,",cg[i]);
  printf("]\n");
  for(i=0;i<n;i++)
    s=s+cg[i];
  avg=s/n;
  printf("\nAverage=%0.2f\n",avg);
  printf("\nDisplaying identical cgpa and roll no");
  for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
	{
	  t1=(int)(cg[i]*100)/100.0;t2=(int)(cg[j]*100)/100.0;
          if(t1==t2)
	    {
	      printf("%d\t%0.2f\n",rn[i],cg[i]);
	      printf("%d\t%0.2f\n",rn[j],cg[j]);
	    }
	}
    }
  return 0;
}

  
