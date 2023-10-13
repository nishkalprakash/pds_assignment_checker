#include <stdio.h>
#include <stdlib.h>

void findMax(int a[][20],int p,int q){
  int sum=0,max=0,i,j,s1,s2,m=p,n=q;
  for(i=0;i<m-2;i++){
    for(j=0;j<n-2;j++){
      sum= a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
      if(sum>max){
	max=sum;
	s1=i;
	s2=j;
      }
    }
  }
    printf("Max submatrix:\n");
    for(i=s1;i<s1+3;i++){
       for(j=s2;j<s2+3;j++){
	 printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("Sum = %d\n",max);
    return;
  }

  void findMin(int a[][20],int p,int q){
  int sum=0,min=82,i,j,s1,s2,m=p,n=q;
  for(i=0;i<m-2;i++){
    for(j=0;j<n-2;j++){
      sum= a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
      if(sum<min){
	min=sum;
	s1=i;
	s2=j;
      }
    }
  }
    printf("Min submatrix:\n");
    for(i=s1;i<s1+3;i++){
       for(j=s2;j<s2+3;j++){
	 printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("Sum = %d\n",min);
    return;
    }

    void findMinMax(int a[][20],int r,int c){
      int i,j,s1=0,r1,r1max=0,m1=10,s=0,d[1][c],min=9,t;
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
	s1=s1+a[i][j];
      }
      r1=s1;
      s1=0;
      if(r1>r1max){
        r1max=r1;
	s=i;
	}
    }
    printf("The maximum row is:");
      printf("[");
      for(j=0;j<c;j++){
        printf("%d ",a[s][j]);
	if(a[s][j]<min) min=a[s][j],t=j;
      }
      printf("]\n");
      printf("minMax=%d,present in row %d,column %d\n",min,s+1,t+1);
      return;
    }
void findMaxMin(int a[][20],int r,int c){
  int i,j,s1=0,r1,r1min=9*c,m1=10,s=0,d[1][c],max=0,t;
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
	s1=s1+a[i][j];
      }
      r1=s1;
      s1=0;
      if(r1<r1min){
        r1min=r1;
	s=i;
	}
    }
    printf("The minimum row is:");
      printf("[");
      for(j=0;j<c;j++){
        printf("%d ",a[s][j]);
	if(a[s][j]>max) max=a[s][j],t=j;
      }
      printf("]\n");
      printf("maxmin=%d,present in row %d,column %d\n",max,s+1,t+1);
      
      return;
    }

       
      
 

int main(){
  int m=0,n=0,i,j;
  int data[20][20];
  //check if entries are valid
  while( m<=2 || m>20 || n<=2 || n>20){
      printf("Enter the number of rows and columns:");
      scanf("%d%d",&m,&n);
  }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      data[i][j]= rand()%10;
    }
  }
   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d ",data[i][j]);
    }
    printf("\n");
   }
   findMax(data,m,n);
   findMin(data,m,n);
   findMinMax(data,m,n);
   findMaxMin(data,m,n);
   return 0;
}

 
    
      
      
