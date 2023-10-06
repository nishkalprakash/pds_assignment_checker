//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>
int a=30;
int arr[30];
int sum(int ar[], int a);
int max(int ar[], int a);
int reverse(int ar[],int a,int b);

int main()
{
  for (int i=0;i<30;i++){
    arr[i]=rand()%11+20;
    printf("\narr[%d] : %d ",i, arr[i]);
  }
  return 0;
}

  
