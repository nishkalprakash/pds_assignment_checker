#include<stdio.h>
int main()
{
 int a[100];
 int n,bins;
 printf("number of elements in array");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  printf("enter element %d:",i+1);
  scanf("%d",&a[i]);
  printf("\n");
 }
 printf("number of bins =");
 scanf("%d",bins)
 int min=a[0];
 int max=a[0];
 for(int i=0;i<n;i++)
 {
  if(a[i]>max)
  max=a[i];
  if(a[i]<min)
  min=a[i];
 }
 
 
 
 


}
