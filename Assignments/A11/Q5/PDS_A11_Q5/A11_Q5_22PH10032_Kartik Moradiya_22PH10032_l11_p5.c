#include<stdio.h>

 int main()
 {
  int max;
  scanf("%d",&max);
  int M1[max][max];
  int M2[max][max];
  int Matrix[max][max];
  
  for(int i=0;i<max;i++){
    for(int j=0;j<max;j++){
      scanf("%d",&M1[i][j]);
    }
  }
  for(int i=0;i<max;i++){
    for(int j=0;j<max;j++){
      scanf("%d",&M2[i][j]);
    }
  }
  
  int sum=0;
  for(int i=0;i<max;i++){
    for(int j=0;j<max;j++){
      sum+=M1[i][j]*M2[j][i];
      Matrix[i][j]=sum;
      printf("%d",Matrix[i][j]);
  }
    printf("\n");
    
 }
  
  
 return 0;
 }
