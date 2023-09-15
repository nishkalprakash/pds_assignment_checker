#include <stdio.h>
int main()
{
  unsigned int a[10];
  float c[10],sum=0,avg;
  int n,count=0;
  
  printf("Enter the number of students : ");
  scanf("%d",&n);
  printf("Enter their roll numbers : ");
  for(int i=0;i<n;i++)
    {
      scanf("%u",&a[i]);
      
    }
  printf("Enter CGPA of all the students : ");
  for(int i=0;i<n;i++)
    {
      scanf("%f",&c[i]);
    }
  for(int i=0;i<n;i++)
    {
      sum=sum+c[i];
    }
  avg=sum/n;
  printf("Roll numbers are : ");
  for(int i=0;i<n;i++)
    { printf("\t");
      printf("%u",a[i]);
    }
  printf("\n");
  printf("CGPA's are : ");
  for (int i=0;i<n;i++)
    {
      printf("\t");
      printf("%3.2f",c[i]);
    }
  printf("\n");
      
  printf("The average CGPA is %3.2f\n",avg);
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
	{
	  if(c[i]==c[j])
	    {
	      printf(" Students %u and %u have same CGPA\n",a[i],a[j]);
	      count++;
	    }
	}
    }
  if(count==0)
    {
      printf("None of the students have same CGPA");
    }
  

  return 0;
}
  
  
  
  
