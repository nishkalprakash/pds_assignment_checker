#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
const int N=5;
const int A=5;
const int B=5;
double Filter[N];
int Bin_A[A],Bin_B[B];
// question 1 starts
double temp=0,y;
//major array loop
srand(100);
for (int i=0;i<=N;i++)
 {
 //random number generation code (heavily referenced from the test paper)
	int randomNumber=rand()%100+1;
	printf("random Number: %d\n",randomNumber);
	int x;
	x=randomNumber;// assinging randnumber generated to x
 for (int k=1;k<=x;k++)
  {
  //evaluation of expression given
   temp+=((pow(-1,k+1)*(k*k))/(2*k+1));
   //printf("temp=%lf\n",temp);(please use if any disparity in code)
  }
 y=temp+cos(x/2);
 //printf("y=%lf\n",y);(please use if any disparity in code)
 Filter[i]=y;
 //conditionals begin here 
 if (Filter[i]>x)
 {
  Bin_A[i]=x;
  if (i>=A)
 {
   break;
 }
 }
 if (Filter[i]<x)
 {
  Bin_B[i]=x;
  if (i>=B)
 {
   break;
 }
 }
 }
 //printing of arrays
 printf("ARRAY FILTER\n");
 for (int i=0;i<=N;i++)
 {
  printf("%lf\t",Filter[i]);
 }
 printf("\n");
 printf("ARRAY BIN_A\n");
 for (int i=0;i<=A;i++)
 {
  printf("%d\t",Bin_A[i]);
 }
 printf("\n");
 printf("ARRAY BIN_B\n");
 for (int i=0;i<=A;i++)
  {
  printf("%d\t",Bin_B[i]);
  }

return 0 ;
}
