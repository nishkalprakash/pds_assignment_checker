//Assignment 6
//Section 14
//Name:Sanika Kadam
//Question 3

//To print largest number apending input numbers


#include<stdio.h>
#define MAX_SIZE 10

//Function to sort array in descending order

void sort_desc(int A[],int size)
{
  int temp;
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(A[i]<A[j])
      {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
      }
    }
    printf("%d",A[i]);
  }
}

int main()
{
  int A[MAX_SIZE];
  int size,i;
  
  //Reading size of array
  
  printf("Enter the size of array: ");
  scanf("%d",&size);

  //Reading elements of array

  printf("Enter the elements of array: ");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&A[i]);
  }

  printf("The largest number is:");
  sort_desc(A,size);

  return 0;
}

  
