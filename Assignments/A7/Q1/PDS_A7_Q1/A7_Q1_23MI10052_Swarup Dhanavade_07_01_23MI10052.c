// Name - SWARUP JAYARAM DHANAVADE
// Roll no-23MI10052

#include<stdio.h>
#include<stdlib.h>

void findMax(int data[][20],int m,int n);
void findMin(int data[][20],int l,int p);
void MaxMin(int data[][20],int m,int n);
void MinMax(int data[][20],int m,int n);


int main()
{
  int data[20][20],m,n;
  printf("enter the values of 'm'(2<m<10):");
  scanf("%d",&m );
  printf("enter the values of 'n'(2<n<10:");
  scanf("%d",&n );

  for(int i=0;i<m;i++){   
    for(int j=0;j<n;j++){
      data[i][j]= rand() % 11;
    }
  }
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d\t",data[i][j]);
    
    } printf("\n");
  }
  
  findMax(data,m,n);
  findMin(data,m,n);
  MaxMin(data,m,n);
  MinMax(data,m,n);
  
  return 0;
}




void findMax(int data[][20],int m,int n){

  int i,j,sum,sumMax=0,a,b;
  for( i=0;i<(m-2);i++){
    for( j=0;j<(n-2);j++){
      sum = data[i][j]+data[i][j+1]+data[i][j+2]+data[i+1][j]+data[i+1][j+1]+data[i+1][j+2]+data[i+2][j]+data[i+2][j+1]+data[i+2][j+2];
      if (sum>sumMax){
	sumMax = sum;
        a=i ; b=j;
       }
    }
  }

  printf("Max subMatrix :\n");
  for(int x=a ;x==a+2;x++){
    for(int y=b ;y==b+2;y++){
    printf("%d  ",data[x][y]);
    }printf("\n");
  }

  printf("sum is : %d\n",sumMax);
  
}




void findMin(int data[][20],int l,int p){
  int i,j,sum,sumMin=91,a,b;
  for( i=0;i<(l-2);i++){
    for( j=0;j<(p-2);j++){
      sum = data[i][j]+data[i][j+1]+data[i][j+2]+data[i+1][j]+data[i+1][j+1]+data[i+1][j+2]+data[i+2][j]+data[i+2][j+1]+data[i+2][j+2];
      if (sum<sumMin){
	sumMin= sum;
        a=i ; b=j;
       }
    }
  }

  printf("Min subMatrix :\n");
  for(int x=a ;x==a+2;x++){
    for(int y=b ;y==b+2;y++){
    printf("%d  ",data[x][y]);
    }printf("\n");
  }

  printf("sum is : %d\n",sumMin);
  
}



void MinMax(int data[][20],int m,int n){
  int max[n];
  int MinMax;
  int lmax;
  int a,b;
  for(int i=0;i<m;i++){
     lmax=0;
    for(int j=0 ; j<n;j++){
     
      if(lmax<data[i][j]) {
        lmax=data[i][j];
	a=j;
      }
      //  max[i]=lmax;
      
    } max[i]=lmax;
  }
  MinMax=11;
  for(int i=0;i<m;i++){
   
    if(MinMax> max[i]){
      MinMax=max[i];
      b=i;
    }
  }

  printf("MinMax is : %d\n",MinMax);
  printf("row is %d and column is %d\n",b,a);
  
}





void MaxMin(int data[][20],int m,int n){
  int min[n];
  int MaxMin;
  int lmin;
  int a,b;
  for(int i=0;i<m;i++){
    lmin=11;
    for(int j=0 ; j<n;j++){
     
      if(lmin>data[i][j]) {
        lmin=data[i][j];
	 a=j;
      }
      // min[i]=lmin;
     
    } min[i]=lmin;
  }
  MaxMin=0;
  for(int i=0;i<n;i++){
   
    if(MaxMin<min[i]){
      MaxMin=min[i];
      b=i;
    }
  }

  printf("MaxMin is : %d\n",MaxMin);
  printf("row is %d and column is %d\n",b,a);
  
}
