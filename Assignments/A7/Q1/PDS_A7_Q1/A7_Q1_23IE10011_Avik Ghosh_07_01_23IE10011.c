//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

void findMax(int data[20][20],int m,int n){
  int i,j,sum,maxsum=0,p,q;
  for(i=0;i<m-2;i++){
    for(j=0;j<n-2;j++){
      sum =sum + data[i][j]+data[i][j+1]+data[i][j+2] + data[i+1][j]+data[i+1][j+1]+data[i+1][j+2] +data[i+2][j]+data[i+2][j+1]+data[i+2][j+2];
      if(sum>maxsum){
	maxsum=sum;
	p=i;q=j;
	sum=0;
      }
    }
  }
  printf("Max submatrix\n");
 for(i=p;i<p+3;i++){
    for(j=q;j<q+3;j++){
      printf("%d\t",data[i][j]);
    }
    printf("\n");
  }
      printf("Sum=%d\n",maxsum);
  return;
}
void findMin(int data[20][20],int m,int n){
  int i,j,sum,minsum=90,a,b,p,q;
  for(i=0;i<m-2;i++){
    for(j=0;j<n-2;j++){
      sum =sum + data[i][j]+data[i][j+1]+data[i][j+2] + data[i+1][j]+data[i+1][j+1]+data[i+1][j+2] +data[i+2][j]+data[i+2][j+1]+data[i+2][j+2];
      if(sum<minsum){
	minsum=sum;
	p=i;q=j;
	sum=0;
      }
    }
  }
  printf("Min submatrix\n");
  for(i=p;i<p+3;i++){
    for(j=q;j<q+3;j++){
      printf("%d\t",data[i][j]);
    }
    printf("\n");
  }
  printf("Sum =%d\n",minsum);
  return;
}

void findMinMax(int data[20][20],int m,int n){
  int i,j,max[m],m1,pos[n],mindata=11,a;
  for(i=0;i<m;i++){
     m1=data[i][0];
     max[i]=m1;
    for(j=0;j<n;j++){
     
      if(m1<=data[i][j])
	max[i]= data[i][j];
      pos[i]= j;
    }
  }
  for(i=0;i<m;i++){
    if(mindata>max[i])
      mindata=max[i];
    a=i;
  }
  printf("Minmax = %d, row=%d, column =%d\n",mindata,a,pos[a]);
  return;
}
    
void findMaxMin(int data[20][20],int m,int n){
  int i,j,min[m],m1,pos[m],maxdata=0,a;
    for(i=0;i<m;i++){
     m1=data[i][0];
     min[i]=m1;
    for(j=0;j<n;j++){
     
      if(m1>=data[i][j])
	min[i]= data[i][j];
      pos[i]= j;
    }
    }
    for(i=0;i<m;i++){
    if(maxdata>min[i])
      maxdata=min[i];
    a=i;
  }
  printf("Minmax = %d, row=%d, column =%d\n",maxdata,a,pos[a]);
  return;
}


    
      


int main(){
  int m,n,i,j;
  printf("Enter two integers m and n\n");
  scanf("%d%d",&m,&n);
  int data[m][n];
  printf("Matrix data\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      data[i][j]= rand()%11;
      printf("%d\t",data[i][j]);
    }
    printf("\n");
  }
  findMax(data,m,n);
  findMin(data,m,n);
  findMinMax(data,m,n);
  findMaxMin(data,m,n);


  return 0;
}
