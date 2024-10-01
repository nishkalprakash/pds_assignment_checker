#include <stdio.h>
int main()
{
int N,bins;
int A[N];
int max ,min; //to calculate the range the max and min value
printf("N=");
  scanf("%d",&N);
  printf("Bins:");
  scanf("%d",&bins);
  printf("A[%d]=");
  for(int i=0;i<N;i++)
  {
    scanf("%d",A[i]);
    }
  max=A[0];
  min=A[0];
  for(int i=0;i<N;i++)
  {
   if(A[i]<min)
   min=A[i];
   if(A[i]>max)
   max=A[i];
   }  //now range is from min to max
  int each=max/bins;   //to calculate to how much range should each bin go to;
  for(int j=0;j<N;j++)
  {
    //to calculate the no. of elements in each we can make intervals from(1,each)then from(each+1,2*each) and then so on
