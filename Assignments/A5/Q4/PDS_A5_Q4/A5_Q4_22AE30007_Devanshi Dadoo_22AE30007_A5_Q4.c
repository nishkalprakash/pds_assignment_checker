/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 5
desciption: to divide an array into bins 
*/



#include<stdio.h>
int min(int A[])
{
 int min=1000;
 for(int i=0; i<10; i++)
 {
  if(A[i]<min)
  {
   min=A[i];
  }
 }
return min;
}

int max(int A[])
{
 int max=1;
 for(int i=0; i<10; i++)
 {
  if(A[i]>max)
  {
   max=A[i];
  }
 }
return max;
}
 


int main()
{
 int A[10], bins, bin1, bin2, bin3;
 float div;
 printf("enter the number of bins");
 scanf("%d", &bins);
 printf("enter 10 numbers");
 for(int i=0; i<10; i++)
 {
  scanf("%d", &A[i]);
 }
 div=(max(A)+min(A))/bins;
 printf("%f", div);
 for(int i=0; i<bins; i++)
}

 

