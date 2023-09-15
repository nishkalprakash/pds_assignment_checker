//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include <stdio.h>
#include<stdlib.h>

int main()
{
  int i=0, j=0, n=0;
  unsigned int R[10];
  float CG[10] , CGsum=0, AvgCG=0;
  printf("Enter no of students: \n");
  scanf("%d", &n);
  for(i=0;i<n;i++)
    {
      printf("Enter Rollno  and CGPA of student no %d: \n", i+1);
	scanf("%d%f",&R[i], &CG[i]);
	CGsum+=CG[i];
    }
  for(i=0;i<n;i++)
    {
      printf("Rollno  and CGPA of student no %d is %d and %f : \n",i+1,R[i],CG[i]);     
    }
  
   for(i=0;i<n;i++)
     {
       for(j=i+1;j<n-1;j++)
	 {
	   if(CG[j]>=CG[i])
	     {
	   if((CG[j]-CG[i]) < 0.05)
	     printf("Student with Rollno %d and %d have same CGPA i.e %0.2f\n ",R[i],R[j],CG[i]);
	     }

	   else if(CG[i]>CG[j])
	     {
	        if((CG[i]-CG[j]) < 0.05)
	     printf("Student with Rollno %d and %d have same CGPA i.e %0.2f\n ",R[i],R[j],CG[i]);
	     }	     
	 }
     }
  AvgCG = CGsum/n; 
  printf("Average CGPA = %f",AvgCG);
  return 0;
}
