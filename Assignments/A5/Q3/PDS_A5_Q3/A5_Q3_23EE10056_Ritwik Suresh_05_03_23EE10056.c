//Ritwik Suresh
//23EE10056
#include<stdio.h>
int main()
{
  unsigned int a[10],c[10],i,j,n,count=0,k=0;
  double b[10],sum=0;
  printf("Enter the no. of students :\n");
  scanf("%d",&n);
  if(n>10)
    {
      printf("Invalid input");
      return 0;
    }
  printf("Enter the roll number and CGPA(1-10) of each student:\n");
  for(i=0;i<n;i++)
    {
      scanf("%u%lf",&a[i],&b[i]);
      sum += b[i];
    }
  printf("The roll no. and CGPA of the students are:\n");
  printf("  Roll No.    CGPA\n");
  for(i=0;i<n;i++)
    printf("%u) %u    %f\n",i+1,a[i],b[i]);
  printf("The average CGPA of the %u students = %lf\n",n,(sum/n));
  for(i=0;i<n;i++)
    { b[i] *= 100;
      c[i] = b[i];
      b[i] = b[i]/100;
    }
  printf("The students having the same CGPA are:\n");
  for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
	{
	  if(c[i]==c[j])
	    {
	      printf("%u  %lf\n",a[j],b[j]);
	      count++;k++;
	      
	      c[j] = j;//so that same output will not be printed
	    }
	}
      if(count>0){
	    printf("%u  %lf\n",a[i],b[i]);
	    printf("\n");
      }
	  count = 0;
    }
  if(k==0)
    printf("No students have same CGPA");
  return 0;
}
	  
      
  
  
