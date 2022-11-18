/* Shruti Srivastava
   21EE30025
   Code Blocks
   Windows 10
   Electrical Engg Dual Degree */
#include<stdio.h>
int max_sum(int A[],int n);
int pos;
int main()
{
  int n,i,sum;
  printf("Enter the number n \n");
  scanf("%d",&n);

  if(n>20 || n<1)  // checking condition for the range of n
  {
    printf("Wrong input....Enter Again\n");
  }
  else
  {
    int A[n];
    printf("Enter Array Elements\n"); // taking array elements as input from user
    for(i=0; i<n; i++)
     {
        scanf("%d",&A[i]);
     }

    sum = max_sum(A,n);
    printf("Largest Sum = %d\n",sum); // printing the largest sum

    printf("\nThe sub-arrays are\n");
    for(i=0; i<pos; i++)
    {
      printf("%d ",A[i]);
    }
  }

return 0;
}

int max_sum(int A[],int n) // function that returns the maximum sum of continuous elements of the array
{                          // n is the array size
  int B[n],sum=0; // creating array that stores the sum of previous elements upto its index
  pos=0;
  int i;
  for(i=0; i<n; i++)
  {
     sum = sum + A[i];
     B[i]= sum;
  }

  int max = B[0];
  for(i=1; i<n; i++) // checking the max entry of B
  {
      if(B[i]>max)
      {
          max = B[i];
      }
  }
return (max); // returns the max value
}
