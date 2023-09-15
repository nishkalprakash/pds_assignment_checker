//Roll no. - 23IE10031
//Name - Om Singh Jadon

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num,num1,num2;
  unsigned int roll;
  float cg;
  float cg_sum;
  printf("Number of students: ");
  scanf("%d", &num);
  int rolls[10];
  float cgs[10];
  for (int i=0; i<num; i++)
    {
      printf("Roll Number of student %d: ", i+1);
      scanf("%ud", &roll);
      rolls[i] = roll;
      
      printf("CGPA of student %d: ", i+1);
      scanf("%f", &cg);
      cgs[i] = cg;
      cg_sum += cg;
    }
  printf("\n");
  for (int j=0; j<num; j++)
    {
      printf("Student with Roll No. %d have CGPA = %f.\n", rolls[j], cgs[j]);
    }
  printf("\nAverage CGPA = %f\n\n", cg_sum/num);
  
  for (int k=0; k<(num-1); k++)
    {
      for (int l = k+1; l<num; l++)
	{
	  num1 = cgs[k]*100;
	  num2 = cgs[l]*100;
	  if (num1 == num2)
	    {
	      printf("Roll No. %d and Roll No. %d have identical CGPA of %f\n", rolls[k], rolls[l], num1/100.0);
	    }
	    
	}
    }
  
}
