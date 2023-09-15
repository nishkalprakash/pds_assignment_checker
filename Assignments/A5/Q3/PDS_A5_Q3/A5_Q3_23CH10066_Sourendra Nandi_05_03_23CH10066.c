//Name: Sourendra Nandi
//Roll No: 23CH10066
#include <stdio.h>
int main()
{
  int i,j,n,temp1,temp2;
  float cgpa[10],sum=0,avg,temp3,temp4;
  unsigned int roll[10];
  printf("Enter the Number of students : ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
    {
      printf("Enter the Roll no and CGPA of Student %d:",i+1);                 //(a)getting values
      scanf("%u %f",&roll[i],&cgpa[i]);
    }
  for (i=0;i<n;i++)
    {
      printf("Student %d : Roll No: %d   CGPA: %f\n",i+1,roll[i],cgpa[i]);          //(a) printing details
    }
  for (i=0;i<n;i++)
    {
      sum=sum+cgpa[i];
    }
  avg=sum/n;                                   //(b) calculating avg
  printf("Average of CGPA = %f\n",avg);
  printf("Details of students with equal cgpa:\n");
  for (i=0;i<n;i++)
    {
      for (j=i+1;j<n;j++)
	{
	  temp1=(int)(cgpa[i]*100);
	  temp3=temp1/100.00;                //Converting to two decimal places 
	  temp2=(int)(cgpa[j]*100);
	  temp4=temp2/100.00;
	  if (temp3==temp4)          //(c) comparing cgpa
	    {
	      printf("Roll number : %u cgpa = %f\n",roll[i],cgpa[i]);
	      printf("Roll number : %u cgpa = %f\n",roll[j],cgpa[j]);
	      printf(".........\n");
	    }
	}
    }
  return 0;
      
}
  
  
