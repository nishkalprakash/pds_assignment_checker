#include <stdio.h>
int main(){
 int n,a[n]; //entering elements into array
 printf("enter number of elements in the array");
 scanf("%d",n);
 for(int i=0;i<n;i++){
  printf("enter an integer:\n");
  scanf("%d",a[i]); }
 printf("enter no.of bins:");
 int bins;
 scanf("%d",bins); //taking input for no.of bins
 int max=a[0];
 for(int i=0;i<n;i++){
   if(a[i]>max){
     max=a[i]; } }
 int min=a[0];
 for(int i=0;i<n;i++){
   if(a[i]<min){
     min=a[i];}
     }
 int r1=min,r2=max;  //finding out range
 

}
