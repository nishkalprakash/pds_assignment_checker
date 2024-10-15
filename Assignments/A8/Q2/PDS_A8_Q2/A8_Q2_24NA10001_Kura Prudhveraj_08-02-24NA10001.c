#include<stdio.h>
int main (){
 int n;
 scanf("%d",&n);
 if((n<0)||(n>100)){
 printf("INVALID");
 }
 int A[n];
 
 for(int k=0;k<n;k++){
  scanf("%d",&A[k]);}
  int max,min=A[0];
  int count=0;
  
  
  for(int t=0+count;t<n-count;t++){
  
  if(A[t]>max){
   max=A[t];
   A[t]=A[n-1-count];
   A[n-1-count]=max;
   }
   if(A[t]<min){
   min=A[t];
   A[t]=A[0+count];
   A[0+count]=min;}
   count++;
   }
   for(int k=0;k<n;k++){
   printf("%d,",A[k]);
   }
   
   return 0;
   }
   
      
   
  
