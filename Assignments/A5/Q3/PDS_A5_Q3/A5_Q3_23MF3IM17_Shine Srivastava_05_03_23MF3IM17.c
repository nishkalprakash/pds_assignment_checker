//Roll no. = 23MF3IM17
//Name = Shine Srivastava

#include <stdio.h>

int main()
{
  int roll[10],n;
  float cg[10];
  printf("Enter number of students\n");
  scanf("%d",&n);

  for(int i=0;i<n;i++)
    {
      printf("Enter the roll no. of student :\n");
      scanf("%d",&roll[i]);
      printf("Enter the CGPA of student :\n");
      scanf("%f",&cg[i]);
    }
  for (int i=0;i<n;i++)
    {
      printf("Roll no. = %d\t CGPA = %f\n",roll[i],cg[i]);
    }
  float sum = 0;
  for(int i=0;i<n;i++)
    {
      sum = sum + cg[i];
    }
  float avg;
  avg = sum/n;
  printf("Average CGPA = %f\n",avg);

  for(int i=0;i<n;i++)
    {
      for(int k=0;k<i;k++)
	{
	  if(i!=k){
	  if(cg[i]==cg[k])
	    {
	      printf("People with equal CGPA :\n");
	      printf("Roll no. : %d\t Roll no. : %d with CGPA = %2f\n",roll[i],roll[k],cg[i]);
	    }
	  }
	}
    }
  return 0;
}
  

     

      
