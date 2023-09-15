#include<stdio.h>
int main()
{
  int n;
  int sum=0;
  float CGPA;
  printf("enter the number of students: ");
  scanf("%d",&n);
  if(n>10)
    printf("wrong input");
  unsigned int r[n];
  float CG[n];
  for(int i=0;i<n;i++)
    {
      printf("enter the roll number: ");
      scanf("%u",&r[i]);
      printf("enter the CGPA: ");
      scanf("%f",&CG[i]);
    }

  for(int k=0;k<n;k++)
    {
      printf("THE ROLL NUMBER IS %d\n",r[k]);
      printf("THE CGPA IS %f\n",CG[k]);
      sum=sum+CG[k];
    }
  float average=(float)sum/n;
  printf("the average is: %f\n",average);
  for(int i=0;i<n;i++)
    {
  for(int j=i+1;j<n;j++)
    {  if(CG[j]==CG[i])
	{	
      printf("PEOPLE WITH SAME CGPA:\n");
      printf("ROLL NUMBER: %d and %d\n",r[j],r[i]);
      printf("CGPA:%f\n",CG[j]);
	}
    }
    }

  return 0;
}
      
