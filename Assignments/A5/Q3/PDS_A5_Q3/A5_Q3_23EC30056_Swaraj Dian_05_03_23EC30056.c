#include<stdio.h>
int main()
{
  int roll[10];
  int m[10];
  float cgpa[10];
  int n,i,j,rl,f=0,k=0;
  float cg,avg,sum=0,eqcg;
  printf("Enter Number of students: ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
    {
      printf("Enter roll number ");
      scanf("%d",&rl);
      if(rl<0)
	{
	  printf("Invalid Input");
	  continue;
	}
      printf("Enter CGPA: ");
      scanf("%f",&cg);
      roll[i]=rl;
      cgpa[i]=cg;
    }
  printf("\nRoll\tCGPA");
  for (i=0;i<n;i++)
    printf("\n%d\t%f",roll[i],cgpa[i]);
  for (i=0;i<n;i++)
      sum=sum+cgpa[i];
  avg=sum/n;
  printf("\nAverage CGPA= %f\n",avg);
  for (i=0;i<10;i++)
    m[i]=-1;
  for (i=0;i<n-1;i++)
    {
      f=0;
      m[i]=0;
      for(j=i+1;j<n;j++)
	{
	  m[j]=0;
	  if ((cgpa[i]==cgpa[j])&&(m[j]!=-1))
	    {
	      m[j]=0;
	      printf("%d, ",roll[j]);
	      f=1;	     
	    }
	  if (f==1)
	    printf("%d have equal cgpa= %f\n",roll[i],cgpa[i]);
	}
    }
}

