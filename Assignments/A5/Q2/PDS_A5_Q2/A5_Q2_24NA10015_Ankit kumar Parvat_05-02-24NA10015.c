#include<stdio.h>
int main()
{
   int arr[100],n;//  defining the array
   int a,b,c;
   scanf("%d",&n);// input the size of array
   if (n>100) printf("Error:n>100");
   else {
      for(int i=0;i<n;++i){
         scanf("%d",&arr[i]);}// input the elements of array
      printf("Original array");   
      for(int i=0;i<n;++i){
         printf("%d,",arr[i]);
      } 
      printf("\n  Duplicates:");  
      for(int i=0;i<n;++i){
          a=0;
          if (arr[i]==1111) continue;
          else {
             for(int j=0;j<n;++j){
                if ((arr[i]==arr[j])&&(i!=j)) {
                   arr[j]=1111;
                   a=a+1;}
                else continue;}
             if ((arr[i]!=1111)&&(a!=0)){    
                printf("\n %d (%d)",arr[i],a+1);}
             else continue;}}}
   printf("\n Unique array");  
      
   for(int i=0;i<n;++i){
        printf("A"); 
        if (arr[i]=1111) continue;
        else  printf("%d",arr[i]);}
         
  return  0;
  }                 
                
                
          
          
   
