//ROLL NO.:23BT30019
//NAME: NAZEER ANWAR
#include<stdio.h>
int main()
{
  int roll[10],n,i,j,c=0;
  float cg;
  float cgpa[10],sum=0.00;
    printf("enter the number of students\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      printf("Enter the details of student %d in the format ROLL_CGPA  ",i+1);
      scanf("%d %f",&roll[i],&cgpa[i]);
    }
  
  printf("Details of students\n");
  printf("ROLL NO.       CGPA\n");
  for(i=0;i<n;i++)
    {
      printf("%-14d %f\n",roll[i],cgpa[i]);
      sum=sum +cgpa[i];
    }
  float avg=sum/n;
  printf("Average CGPA of students is %f\n",avg );


for(i=0;i<n;i++)
    {
      cgpa[i]=(int)(cgpa[i]*100);
	cgpa[i]=(float)(cgpa[i]/100);
    }


    for(i=0;i<n;i++)
    {
      for(j=i;j<n;j++)
    {
      if(cgpa[i]==cgpa[j])
	{ printf("Roll %d ",roll[j]);   c++;   cg=cgpa[i];   }
    }
      if(c>=2)
	{ printf("have identical CGPA of %f\n",cg);}
      c=0;
    }
  

}
