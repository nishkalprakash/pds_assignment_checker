//Roll no.:23ME10025
//Name:Gargi Mukherjee
#include <stdio.h>
int main()
{
  unsigned int roll[10];int n,r;float c;
  float cg[10],a=0,avg;
  printf("Enter the total number of students less than 10: \n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      printf("Enter the Roll Number: \n");
      scanf("%u",&r);
      printf("Enter the cgpa: \n");
      scanf("%f",&c);
      roll[i]=r;
      cg[i]=c;
    }
  printf("The details of the student: \n\n");
  for(int i=0;i<n;i++)
    {
      printf("Roll number:%d CGPA:%f \n\n", roll[i],cg[i]);
    }
  for(int i=0;i<n;i++)
    {
      a=a+cg[i];
    }
  avg=a/n;
  printf("\nThe average cgpa of students:%f\n\n",avg);
  int b=0;
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
	{
	  if(cg[i]==cg[j])
	    {
	    printf("Roll no.:%d Cgpa: %f \n",roll[j],cg[j]);
	    b=1;
	    }
	}
      if (b==1)
	{
	  printf("Roll no.:%d Cgpa:%f \n",roll[i],cg[i]);
	  b=0;
	}
    }
   return 0;
}

  
