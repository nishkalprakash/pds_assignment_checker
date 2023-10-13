//23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int n,i,j;
  printf("enter the number of students(maximum 10)\n");  //reading no of students
  scanf("%d",&n);
  unsigned rno[n];
  float CGPA[n],sum=0,avg=0;
  for (i=0;i<n;i++)      //reading roll nos
    {
      printf("enter rollno\n");
      scanf("%u",&rno[i]);
    }
  for (i=0;i<n;i++)
    {
      printf("rno[%d]=%u\n",i,rno[i]);    //displaying roll nos array
    }
  for (i=0;i<n;i++)
    {
      printf("enter CGPA\n");      //reading CGPA
      scanf("%f",&CGPA[i]);
    }
  for (i=0;i<n;i++)
    {
      printf("CGPA[%d]=%f\n",i,CGPA[i]);   // displaying CGPA array
    }
  for (i=0;i<n;i++)
    {
      sum=sum+CGPA[i];         // calculating sum of CGPA and average
      avg=sum/n;
    }
  printf("the average CGPA of students is %f\n",avg);
  for (i=0;i<n;i++)
    {
      for (j=i+1;j<n;j++)
	{
	  if(CGPA[i]==CGPA[j])    // checking for equality of CGPA
	    {
	      printf("rollno and CGPA of students having identical CGPA are %u %u and %f",rno[i],rno[j],CGPA[i]);      //printing roll no and CGPA for equal CGPA
	    }
	}
    }
  return 0;
}
  
    
  
