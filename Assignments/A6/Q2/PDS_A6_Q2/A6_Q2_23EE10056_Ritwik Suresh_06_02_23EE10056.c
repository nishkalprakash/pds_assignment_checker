#include<stdio.h>
#include<stdlib.h>
int mmax=0;
int sum1(int a[],int size){
  int sum;
  if(size>0)
    sum= a[size-1] + sum1(a,size-1);
  if (size==0)
      return a[0];
   else
     return sum;
}
int max(int a[],int size){
  if(a[size-1]>mmax)
  mmax = a[size-1];
  if(size>0)
    max(a,size-1);
  return mmax;
}
  void reverse(int a[],int i,int j){
  int temp,beg,end;
  beg = i;end = j;
  temp = a[j];
  a[j]= a[i];
  a[i] = temp;
  i++;j--;
  if(i<15)
    reverse(a,i,j);
  if(i==beg){
    for(i=beg;i<end;i++)
      printf("%d ",a[i]);
  }
}
int main()
{
  int a[30],i;
  for(i=0;i<30;i++)
    {
      a[i] = 20 + rand()%11 ;
    }
  printf("The sum of the array elements is: %d",sum1(a,30));
  printf("\nthe max of the array numbers is: %d",max(a,30));
  printf("\nThe elements of the array in reverse is:\n");
  reverse(a,0,29);
  return 0;
}
  
  
  
	 
