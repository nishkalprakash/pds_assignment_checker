/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:2
topic:searching and sorting 
*/

#include<stdio.h>
int main()
{
int n,i,a;
printf("enter the number of elements\n");
scanf("%d",&n);
int A[100];
printf("enter the  elements\n");
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}
printf("enter the new value\n");
scanf("%d",&a);
for(i=n-1;i>=0 && A[i]>=a;i--){

A[i+1]=A[i];
}  
A[i+1]=a; 
n=n+1;
printf("the output array is\n");
  for(i=0;i<n;i++){
  printf("%d\t",A[i]);
}     
return 0;
}
