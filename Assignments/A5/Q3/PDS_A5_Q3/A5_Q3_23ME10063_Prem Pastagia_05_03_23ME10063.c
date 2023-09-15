// Name Prem Pastagia
// Roll Number 23ME10063

#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned roll_no[10];
  float cgpa[10],sum=0,avg;
  int i,j,num;

  printf("Enter the number of students:\n");
  scanf("%d",&num);
  printf("Enter the roll number and the cgpa:\n");
  //taking input
  for(i=0;i<=num-1;i++)
    {
      scanf("%u %f",&roll_no[i],&cgpa[i]);
    }
  //printing output
      printf("\nRoll No CGPA \n");
    for(i=0;i<=num-1;i++)
    {
      printf("%u      |    %.2f\n",roll_no[i],cgpa[i]);
    }
    //calculating average
  for(i=0;i<=num-1;i++)
    {
      sum=sum+cgpa[i];
    }

  avg=(float)sum/num;
  printf("The average cgpa is %.2f\n",avg);
  //students with same cgpa

  for(i=0;i<=num-1;i++)
    {
      for(j=i+1;j<=num-1;j++)
	{
	  if(cgpa[i]==cgpa[j])
	    {
	      printf("%u  %.2f",roll_no[i],cgpa[i]);
	    }
	}
    }

  
   return 0;
}
