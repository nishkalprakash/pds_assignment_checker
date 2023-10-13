#include <stdio.h>
int main()
{
  int roll[10],n;float cgpa[10],average,sum;
  printf("enter the number of students for which input will be taken\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      printf("enter the roll no\n");
      scanf("%d",&roll[i]);
      printf("enter the CGPA\n");
      scanf("%f",&cgpa[i]);
    }
  printf("\n");
  for(int j=0;j<n;j++)
    {
      sum=(sum+cgpa[j]);
      printf("roll no:%d CGPA:%f",roll[j],cgpa[j]);
      printf("\n");
    }
  average=sum/n;
  printf("the average cgpa is:%f\n",average);
  int k=0,i=1;
  while(k<(n-1))
    {
      for(int h=0;h<n;h++)
	{
	  if(k!=h)
	    {
	      if((int)(cgpa[k]*100)==(int)(cgpa[h]*100))
		{
		  if(i<2)
		    {
		      printf("roll no:%d cgpa:%f\n",roll[k],cgpa[k]);
		      printf("roll no:%d cgpa:%f\n",roll[h],cgpa[h]);
		      i++;
		    }
		  else
		    {
		      printf("roll no:%d cgpa:%f\n",roll[h],cgpa[h]);
		    }
		}
	    }
	}
      k++,i=0;
    }
  return 0;
}
