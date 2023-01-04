//Assignment 6
//Section 14
//Name:Sanika Kadam
//Question 5


//To find how many elements are out of order

#include<stdio.h>
#define MAX_SIZE 10

int main()
{
  int A[MAX_SIZE];
  int size,count=0,i,j;

  //reading size of the array

  printf("Enter size of array: ");
  scanf("%d",&size);

  //reading elements of array

  printf("Enter %d elements of array: ",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d",&A[i]);
  }
  
  //To count elements that are out of order

  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
        if(A[j]>=A[i])
        {
        break;
        }
        else
        {
        count++;
        }
    }
  }

  printf("Out of order: %d\n",count);
  return 0;
}

