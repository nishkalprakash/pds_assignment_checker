#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,i;
  int arr[50];
  printf("Enter the number of random numbers to be generated: ");
  scanf("%d", &a);
  for (i=0; i<a+1; i++)
    arr[i]= rand()%40+10;
  for (i=0; i<a+1; i++)
    printf("arr[%d] = %d\n", i,arr[i]);

}
