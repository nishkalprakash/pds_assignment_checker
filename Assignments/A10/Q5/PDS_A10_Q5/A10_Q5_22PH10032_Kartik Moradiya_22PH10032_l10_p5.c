#include<stdio.h>
#include<stdlib.h>

typedef struct list{
  int A[50];
}l;

 int main()
 {
  l l1;
  for(int i=0;i<5;i++){
   scanf("%d",&l1.A[i]);
  }
  l l2;
  for(int i=0;i<5;i++){
   scanf("%d",&l2.A[i]);
  }
  
  return 0;
  }
