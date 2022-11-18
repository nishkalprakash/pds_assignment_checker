#include<stdio.h>
//NAME- ANMOL KUMAR MISHRA
// ROLL NO.- 21EC30060
//SECTION- 03
// PDS LAB TEST 2 QUESTON 2


int max_Alpha_Value(int S[], int n) //DEFINING THE INT type FUNCTION
{
  int max = 0, count;
  for (int i = 1; i<n; i++)
  {
    count = 0;
    for (int j = 0; j<i; j++)
    {
      if (S[j]%S[i]==0) count++;
    }
    if (count>max) max = count;
  }
  return max; // return the value becuase we had use the INT type function 
}

int main()
{
  int n;
  printf("Enter the size of the array.\n"); // size of array 
  scanf("%d", &n); // input of size of array
  int S[n]; 
  printf("Enter the elements of the array: ");  // use to print the sentence 
  for(int i=0; i<n; i++) // for loop to taking multiple input into the array
  {
    scanf("%d", &S[i]); // input of elements of array that we have  defined 
  }
  printf("Maximum alpha value in the given sequence is %d.\n", max_Alpha_Value (S, n)); // calling the function that we have defined above 
}