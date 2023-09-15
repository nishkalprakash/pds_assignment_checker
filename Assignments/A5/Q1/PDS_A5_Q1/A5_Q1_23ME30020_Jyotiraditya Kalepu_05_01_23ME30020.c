//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int array[50], inter=0, len, change=0;   // Initialzing array and variables
  printf("Enter the length of the array : ");
  scanf("%d",&len);
  if(len > 50) printf("Array exceeding maximum limit\n");   // Checking if array exceeds maximum limit
  else
    {
     for(int i=0; i<len; i++)     // Storing random numbers in the array
      {
      array[i] = rand()%90 + 10;
      }
      printf("The original array is :\n");    // Printing original array
    for(int i=0; i<len; i++)        
      {
	printf("%d ",array[i]);
      }
    for(int i=len; i<50; i++)     // Assiging remaining unassigned values of the array zero
      {
      array[i] = 0;
      }
    for(int i=2; i<len; i=i+2)    
      {
	if(array[i] <  array[i-2]) // Interchanging the values
	  {
	    change = array[i];
	    array[i] = array[i-2];
	    array[i-2] = change;
	    inter ++;
	  }
      }
    printf("\nThe new array is :\n");    // Printing the new array
    for(int i=0; i<len; i++)
      {
	printf("%d ",array[i]);
      }
    printf("\nNumber of interchanges is : %d\n", inter);
    }
  return 0;
}
