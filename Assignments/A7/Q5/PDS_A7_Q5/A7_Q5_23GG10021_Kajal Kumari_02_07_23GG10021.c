#include<stdio.h>
#include<stdlib.h>
int main(){
  int a[],b[],c[];
  int n;
  printf(" enter the total students: ", n);
  scanf("%d",&n);
  for(int i=0; i<=n;i++){
    scanf("%d", &rand()%(2000-1000)+1000);
    printf(" the roll number a[%d] : %d",i, rand()%(2000-1000)+1000);
    scanf("%d", &rand()%(100-0)+0);
    printf(" the marks b[%d] :%d",i, rand()%(100-0)+0);
    scanf(" %d",&rand()%(35-15)+15);
    printf(" the age c[%d] :%d", i,rand()%(35-15)+15);
 
    scanf("%d", &a[i]);
    scanf("%d",&b[i]);
    scanf("%d", &c[i]);
  } 
    if(c[i]=c[i+1]){
      printf(" roll:%d age:%d mark:%d" );
      
  }return 0;
  
