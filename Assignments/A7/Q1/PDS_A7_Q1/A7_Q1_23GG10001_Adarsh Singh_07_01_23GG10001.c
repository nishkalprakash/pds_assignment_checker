//Roll No.:23GG10001
//Name:Adarsh Singh
#include<stdio.h>
#include<stdlib.h>
int data[20][20];
void findMax(int A[][20],int a,int b){
  int max=0,sum=0,max_i,max_j,i,j,k,i1,j1;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      max=max+A[i][j];
    }  
  }
  for(k=0;k<a-2;k++){
    for(i=k;i<a&&i<i+3;i++){
      for(j=0;j<b&&b<b+3;j++){
	sum=sum+A[i][j];
	i1=i;
	j1=j;
      }
    }
    if(sum>max){
      max=sum;
      max_i=i1;
      max_j=j1;
    }
    if(k==a-2){
      k=0;
      for(k=0;k<a-2;k++){
	for(i=k;i<a&&i<i+3;i++){
	  for(j=1;j<b&&b<b+3;j++){
	    sum=sum+A[i][j];
	    i1=i;
	    j1=j;
	  }  
        }
      }
    }
    if(sum>max){
      max=sum;
      max_i=i1;
      max_j=j1;
    }
  }  
  printf("Max submatrix:\n");
  for(int i=max_i;i<=max_i+3;i++){
    for(int j=0;j<=max_j;j++){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  printf("%d\n",sum);
}

void findMinMax(int A[][20],int a,int b){
  int i,j,max_r[10],min=10,i1,j1;
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      if(max_r[i]<A[i][j]){
	max_r[i]=A[i][j];
      }  
    }
  }
  for(i=0;i<a;i++){
    if(min>max_r[i]){
      min=max_r[i];
    }
  }
  printf("minMax=%d\n",min);
}

void findMaxMin(int A[][20],int a,int b){
  int i,j,min_r[10],max=0,i1,j1;
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      if(min_r[i]>A[i][j]){
	min_r[i]=A[i][j];
      }  
    }
  }
  for(i=0;i<a;i++){
    if(max<min_r[i]){
      max=min_r[i];
    }
  }
  printf("maxMin=%d\n",max);
}
int main(){
  int m,n,i,j,s_data[20][20];
  printf("Enter the value of m and n respectively");
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      data[i][j]=(rand()%(10-0+1)+0);
    }  
  }
  for(i=0;i<20;i++){
    for(j=0;j<20;j++){
      printf("%d ",data[i][j]);
    }
    printf("\n");
  }
  findMax(data,m,n);
  findMaxMin(data,m,n);
  findMinMax(data,m,n);
  return 0;
}
