#include<stdio.h>
#define N 100
int main()
{
   int arr[N],n,a;//  defining the array
   scanf("%d",&n);
   if (n>100) printf("Error:n>100");
   else {
     for(int i=0;i<n;++i){
         scanf(" %d",&arr[i]);}// inputting the elements of  array
         
     printf("Original array");    
     for(int i=0;i<n;++i){
         printf("\n %d",arr[i]);}    
         
     for(int i=0;i<n;++i){
         if (arr[i]<0) continue;
         else if ((i+1)>=n) break;
         else if ((arr[i+1]<0) &&  (arr[i]>0)){
              a=arr[i+1];
              arr[i+1]=arr[i];
              arr[i]=a;} }
     printf("Reaaranged array");    
     for(int i=0;i<n;++i){
         printf("\n %d",arr[i]);} }          
   return  0;           
   
}
