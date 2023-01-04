//Assignment 6
//Section 14
//Name:Sanika Kadam
//Question 4


// To insert new value to already sorted array

#include<stdio.h>
#define MAX_SIZE 10

int main()
{
  int Arr[MAX_SIZE];
  int num,pos,i,j,size;

  //Reading size of array

  printf("Enter the size of array: ");
  scanf("%d",&size);

  //Reading elements of array

  printf("Enter %d elements of sorted array: ",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&Arr[i]);
  }
 
  //Reading number to be inserted  

  printf("Enter the number to be inserted: ");
  scanf("%d",&num);

  //Making space for number

  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
     if((Arr[i]<num) && (Arr[j]>num))
     {
      pos=i+1;
      break;
     }
    }
  }

  //Inserting number at suitable position 

  for(int i=size;i>=pos;i--)
  {
    Arr[i]=Arr[i-1];
  }
  Arr[pos]=num;
  size++;

  //Printing array after inserting number

  printf("Array after insertion: ");
  for(i=0;i<size;i++)
  {
   printf("%d ",Arr[i]);
  }
  return 0;
}
      
