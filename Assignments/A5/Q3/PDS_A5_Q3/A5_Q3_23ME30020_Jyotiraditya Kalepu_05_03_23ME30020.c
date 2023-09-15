#include <stdio.h>

int main()
{
  unsigned int rollnum[10];      // Initialising arrays
  float cgpa[10];
  int len; float avg = 0.0, sum = 0.0;
  printf("Enter number of students : ");  
  scanf("%d", &len);
  printf("Enter Roll Number and CGPA of each student\n");
  for(int i=0; i<len; i++)      // Entering values into the array
    {
      scanf("%u %f",&rollnum[i],&cgpa[i]);
    }
  printf("\nDetails are:\n");   // Printing the values 
  for(int i=0; i<len; i++)
    {
      printf("Roll Number: %u    CGPA: %0.2f\n",rollnum[i],cgpa[i]);
      sum = sum + cgpa[i];
    }
  avg = sum/len;        // Finding the average CGPA
  printf("The avg CGPA is %0.2f\n", avg);  
  for(int i=0; i<len; i++)   // Checking if two students have same CGPA
    {
      for(int j=i+1; j<len; j++)
	{
	  int a = cgpa[i]*100;
	  int b = cgpa[j]*100;
	  if(a==b)
	    printf("%u and %u both have same CGPA\n",rollnum[i],rollnum[j]);
	}
    }
  return 0;
}
  
  
