//name tanishq sura
//roll no. 23CS10071

#include<stdio.h>
#include<stdlib.h>

void findMax(int data[][20],int m,int n);
void findMin(int data[][20],int m,int n);
void findMinMax(int data[][20],int m,int n);
void findMaxMin(int data[][20],int m,int n);

int main(){
  int data[20][20];
  int m,n;
  printf("give rows and columns: ");
  scanf("%d %d",&m,&n);
  for(int i=0;i<m;i++) {
    for(int j=0;j<n;j++){
      data[i][j]=rand()%11;
      printf("%3d",data[i][j]);
    }
    printf("\n");
  }
  findMax(data,m,n);
  findMin(data,m,n);
  findMinMax(data,m,n);
  findMaxMin(data,m,n); 
   return 0;
}
void findMax(int data[][20],int m,int n){
  int jmax,imax,summax=0,sum;
  for(int i=0;i<m-2;i++){
    for(int j=0;j<n-2;j++){
      sum=0;
      for(int k=0;k<3;k++){
	for(int l=0;l<3;l++){
	  sum=sum+data[i+k][j+l];
	}
      }
      if(sum>summax){
	summax=sum;
	imax=i;
	jmax=j;
      }
    }
  }
  printf("the largest sum submatrix:\n");
  for(int i=imax;i<imax+3;i++){
    for(int j=jmax;j<jmax+3;j++){
      printf("%3d",data[i][j]);
    }
    printf("\n");
  }
  printf("sum=%d\n",summax);
  return;
}

void findMin(int data[][20],int m,int n){
  int jmin,imin,summin=101,sum;
  for(int i=0;i<m-2;i++){
    for(int j=0;j<n-2;j++){
      sum=0;
      for(int k=0;k<3;k++){
	for(int l=0;l<3;l++){
	  sum=sum+data[i+k][j+l];
	}
      }
      if(sum<summin){
	summin=sum;
	imin=i;
	jmin=j;
      }
    }
  }
  printf("the smallest sum submatrix:\n");
  for(int i=imin;i<imin+3;i++){
    for(int j=jmin;j<jmin+3;j++){
      printf("%3d",data[i][j]);
    }
    printf("\n");
  }
  printf("sum=%d\n",summin);
  return;
}

void findMinMax(int data[][20],int m,int n){
  int ireq,jreq,jtemp,minmax=20;
  for(int i=0;i<m;i++){
    int max=0;
    for(int j=0;j<n;j++){
      if(max<data[i][j]){
	max=data[i][j];
	jtemp=j;
      }
    }
    if(max<minmax){
      minmax=max;
      ireq=i;
      jreq=jtemp;
    }
  }
  printf("minMax= %d, present in row %d, column %d\n",minmax,ireq,jreq);
  return;
}

void findMaxMin(int data[][20],int m,int n){
  int ireq,jreq,jtemp,maxmin=-1;
  for(int i=0;i<m;i++){
    int min=20;
    for(int j=0;j<n;j++){
      if(min>data[i][j]){
	min=data[i][j];
	jtemp=j;
      }
    }
    if(min>maxmin){
      maxmin=min;
      ireq=i;
      jreq=jtemp;
    }
  }
  printf("maxMin= %d, present in row %d, column %d",maxmin,ireq,jreq);
  return;
}

    
