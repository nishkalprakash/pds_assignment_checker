//23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
  unsigned a[size],i,j,k,n,sum=0,avg;
  float b[size];
  printf("enter the number of students max 10\n");
  scanf("%d",&n);     //reading the no of students
  for (i=0;i<n;i++)
    {
      printf("enter the roll number\n");
      scanf("%u",&a[i]);
    }
  for (i=0;i<n;i++)
    {
      printf("the values stored in the array are %u\n",a[i]);  //printing array of rollno
    }
    
  for (i=n;i<10;i++)
    {
      a[i]=0;
    }
  for (j=0;j<n;j++)
    {
      printf("enter the CGPA");
      scanf("%f",&b[j]);   //reading the CGPA
    }
  for (j=0;j<n;j++)
    {
      printf("the values stored in the array are %f\n",b[j]);   //printing array of CGPA
    }
    
  for (i=0;i<n;i++)
    {
      for (j=0;j<n;j++)
        {
	  for (k=0;k<n;k++)
	    {
               sum=sum+b[j];
               avg=(float)sum/n;   //calculating average
               printf("the average CGPA of the students is %f\n",avg);
	       if (b[j]==b[k])
		 {printf("the roll numbers of students having identical CGPA are %d%d\n",a[j],a[k]);
		   printf("the identical CGPA are %f%f\n",b[j],b[k]);}
	    }
	}
    }
  return 0;
}
	    
  
  
  
