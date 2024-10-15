#include <stdio.h>
int digits(int n)   //recursive function to calculate the number of digit
{
 int count =0;
 if(n<10 && n>=0)
 return 1;
 if(n>=10){
 int d=n%10;
 count++;
 count+=digits(n/10);
 return count;
 }
 }
int main()
{
  int A[100],n;
  scanf("%d",&n);
  printf("A[%d] = ",n);
  for(int i=0;i<n;i++)
  scanf("%d",&A[i]);
  for(int k=0;k<n;k++)  //calculate first digit of each element of array and then place them accordingly.
  {
    
  
