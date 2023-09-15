//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  unsigned int roll;
  float cgdata[10], avgcg = 0;
  int i, j, n, rolldata[10], mark1, mark2, counter = 0;

  printf("Enter the number of students for which data has to be entered : ");
  scanf("%d",&n);
  

  //Getting Student Data from the user
  for(i = 0; i < n; i++)
    {
      printf("Enter the Roll Number of the student : ");
      scanf("%u",&rolldata[i]);
      printf("Enter the CGPA of the student : ");
      scanf("%f",&cgdata[i]);
      avgcg = avgcg + cgdata[i];
    }
  avgcg = avgcg/n; //Average CGPA


  //Printing Student Data
  printf("Student Data\n");
  for(i = 0; i < n; i++)
    {
      printf("Roll Number : %d \t CGPA : %f\n",rolldata[i], cgdata[i]);
    }
  printf("Average CGPA of students : %f\n",avgcg);

  printf("\n");

  //Checking equality of CGPA and printing data of equal ones
  for(i  = 0; i < n; i++)
    {
      counter = 0;
      mark1 = (int)(cgdata[i]*100);
      for(j = i+1; j < n; j++)
	{
	  mark2 = (int)(cgdata[j]*100);
	  if(mark1 == mark2)
	    {
	      printf("Roll Number : %u CGPA : %0.2f\n",rolldata[j], (int)(cgdata[j]*100)/100.0);
	      counter++;
	    }
	  if((j == (n-1))&&(counter > 0))
	    printf("Roll Number : %u CGPA : %0.2f\n",rolldata[i], (int)(cgdata[i]*100)/100.0);
	}
      printf("\n");
    }
  
  return 0;
}
