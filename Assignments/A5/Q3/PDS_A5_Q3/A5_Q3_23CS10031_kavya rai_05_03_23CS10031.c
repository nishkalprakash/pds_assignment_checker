#include<stdio.h>
#include<stdlib.h>
int main()
{
  int arr1[10],n,i,j,h;
  float arr2[10],avg,sum=0.0;
  printf("Enter the no. of detail of students to be entered:");
  scanf("%d",&n);
  printf("Enter the roll no. and CGPA of %d students:\n",n);
  if(n<=10)
    {
      for(i=0;i<n;i++)
       {
         scanf("%d%f",&arr1[i],&arr2[i]);
       }
      printf("roll no. and CGPA of %d students are:",n);
      for(i=0;i<n;i++)
	{
	  printf("%d  %f\n",arr1[i],arr2[i]);
	  sum=sum+arr2[i];
	}
      avg=sum/n;
      printf("The avg CGPA of students = %f\n",avg);
      for(i=0;i<n;i++)
	{ h=0;
	  for(j=i+1;j<n;j++)
	    {
	      if(arr2[i]==arr2[j])
		{ h=1;
		  printf("%d %f,  ",arr1[j],arr2[j]); 
		}
	    }
	  if(h==1)
	    {
	      printf("%d %f have same CGPA \n ",arr1[i],arr2[i]);
	    }
	}
    }
}
