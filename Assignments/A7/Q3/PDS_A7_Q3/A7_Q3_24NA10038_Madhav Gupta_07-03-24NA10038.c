#include<stdio.h>
#define X 100
int Max(int A, int n)//to find the right end of range
{
   int max=0, i;
   for(i=0;i<n;i++){
   if(A[i]>max)
   {
   max=A[i];}
   }
int Min(int A, int n)//to find the left end of range
{
   int min=A[0], i;
   for(i=0;i<n;i++){
   if(A[i]<min)
   {
   min=A[i];}
   }
   return min;
int main(){
    int A[X], Bins, N, i, j;
    scanf("%d", &N);
    for(i=0 ; i<N;i++){
    scanf("%d", &A[i]);
    }
    scanf("%d", &Bins);
    for(i=0;i<Bins;i++){//to classify into different bins
      for(j=0;j<N;j++){
        if (A[j]<(int Min));
        }}
        return 0;
        }
    
