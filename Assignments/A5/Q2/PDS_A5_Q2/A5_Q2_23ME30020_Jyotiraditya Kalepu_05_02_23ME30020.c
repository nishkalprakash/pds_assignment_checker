//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int array[50], inter=0, len, sum=0, count=0;   // Initialzing array and variables
  printf("Enter the length of the array : ");
  scanf("%d",&len);
  if(len > 50) printf("Array exceeding maximum limit\n");   // Checking if array exceeds maximum limit
  else
    {
     for(int i=0; i<len; i++)     // Storing random numbers in the array
      {
      array[i] = rand()%40 + 10;
      }
      printf("The original array is :\n");    // Printing original array
    for(int i=0; i<len; i++)        
      {
	printf("%d ",array[i]);
      }
    printf("\nTriplets whose sum is equal to sixty is:\n");  // Checking for numbers in array which sum to 60
    for(int i=0; i<len; i++)
      {
	for(int j=i+1; j<len; j++)
	  {
	    for(int k=j+1; k<len; k++)
	      {
		sum = array[i]+array[j]+array[k];
		if(sum ==  60)
		  {
		    printf("Triplet : %d, %d, %d\n",array[i],array[j],array[k]);
		    printf("Indice  : %d, %d, %d\n",i,j,k);
		    count ++;  
		  }
	      }
	  }
      }
    if(count == 0) printf("No such triplet exists\n");  // Printing if there are no triplets
    }
  return 0;
}
