/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Lab Test- 2a
Package- stdio.h
*/
#include <stdio.h>

int maxSum(int A[], int N) //this function finds the maximum sum of all elements of all sub-arrays
{
    int max = A[0]; //maximum sum initialized as first element of the array

    for(int i = 0; i<N;i++) //nested loop to find sum of all possible sub-arrays
    { 
        for(int k=i;k<N;k++)
        {
           int sum = 0; //sum of the sub-array initialized as 0 and also gets reset after each sub-array
           for(int j = i;j<=k;j++)
          {
           sum+= A[j];
          }
          if (sum>max)//check for greater sum than the current maximum sum
          {
              max = sum;
          }
        }
    }
    return max;
}

int maxSubArray(int A[], int N, int Max) //this function finds the sub-arrays whose sum of all elements is equal to the maximum sum which was found in the function maxSum()
{
  for(int i = 0; i<N;i++) //nested loop to find all possible sub-arrays
    { 
        for(int k=i;k<N;k++)
        {
           int sum = 0; //sum of the sub-array initialized as 0 and also gets reset after each sub-array
           for(int j = i;j<=k;j++)
          {
           sum+= A[j];
          }
          if (sum==Max) //if the sum of the sub-array is equal to the maximum sum then the sub-array is printed
          {
              for(int j = i;j<=k;j++)
              {
                  printf("%d ",A[j]);
              }
              printf("\n");
          }
        }
    }
    return 0;  
}

int main()

{   //taking input of array
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array\n");
    for(int i = 0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    //array input complete
    int maxsum= maxSum(a,n); //calls the function maxSum
    printf("Largest sum = %d\n",maxsum);
    printf("Sub-arrays:-\n");
    maxSubArray(a, n, maxsum); //calls the function maxSubArray
    return 0;
}

