//Roll no. - 23IE10031
//Name - Om Singh Jadon

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int roll,age,marks,min;
  int roll_arr[20];
  int age_arr[20];
  int marks_arr2[20];
  int age_arr2[20];
  int marks_arr[20];
  for (int i = 0; i<20; i++)
    {
      roll = rand()%1000 + 1000;
      age = rand()%10 + 15;
      marks = rand()%100;
      roll_arr[i] = roll;
      age_arr[i] = age;
      age_arr2[i] = age;
      marks_arr[i] = marks;
      marks_arr2[i] = marks;
    }
  printf("\nPART 1\n");
  for (int j = 0; j<20; j++)
    {
      if (age_arr2[j] != -1){
	
      printf("Roll: %d  Age: %d  Marks: %d\n", roll_arr[j], age_arr[j], marks_arr[j]);
      for (int k = j+1; k<20; k++)
	{
	  if (age_arr[j] == age_arr[k])
	    {
	      printf("Roll: %d  Age: %d  Marks: %d\n", roll_arr[k], age_arr[k], marks_arr[k]);
	      age_arr2[k] = -1;
	    }
	}
      printf("\n.....................\n");
      }}
  printf("\n.....................\n");
  printf("\n.....................\n");
  printf("\nPART 2\n");
  printf("\n.....................\n");
  
  for (int y = 0; y<20; y++)
    {
      if (marks_arr2[y] != -1){
	
      printf("Roll: %d  Age: %d  Marks: %d\n", roll_arr[y], age_arr[y], marks_arr[y]);
      for (int z = y+1; z<20; z++)
	{
	  if (marks_arr[y] == marks_arr[z])
	    {
	      printf("Roll: %d  Age: %d  Marks: %d\n", roll_arr[z], age_arr[z], marks_arr[z]);
	      marks_arr2[z] = -1;
	    }
	}
      printf("\n.....................\n");
      }}
  printf("\n.....................\n");
  printf("\n.....................\n");
  printf("\nPART 3\n");
  printf("\n.....................\n");

  int p=0;
  int b=0;
  
  for (int a=0; a<20; a++)
    {
      min = 3000;
      for (b=0; b<20; b++)
	{
	  if (roll_arr[b]<min)
	    {
	      min = roll_arr[b];
	      p = b;
	    }
	}
      printf("Roll: %d  Age: %d  Marks: %d\n", roll_arr[p], age_arr[p], marks_arr[p]);
      printf("\n.....................\n");


      roll_arr[p] = 4000;
      
    }
}
