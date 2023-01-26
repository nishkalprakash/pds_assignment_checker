#include<stdio.h>
#include<stdlib.h>

typedef struct list{
  int A[50];
}l;

 int main()
 {
 l a;
  for(int i=0;i<12;i++){
   scanf("%d",&a.A[i]);
  }
  int min=a.A[0];
  int max=a.A[0];
  for(int i=1; i<12;i++){
    if(a.A[i]<min){
     min =a.A[i];
    }else if(a.A[i] >a.A[i+1]){
    int temp=a.A[i+1];
    a.A[i+1]=a.A[i];
    a.A[i]=temp;
    }
  }
 printf("duplicate number:");
 for(int i=0;i<6;i++){
   for (int j=0;j<12;j++){
     if(i==j){
     continue;
     }else if(a.A[i]==a.A[j] ){
     printf("%d",a.A[i]);
     }
   }
 
 }
 printf("max:%d",a.A[11]);
   printf("min:%d",a.A[0]);
 return 0;
 }
