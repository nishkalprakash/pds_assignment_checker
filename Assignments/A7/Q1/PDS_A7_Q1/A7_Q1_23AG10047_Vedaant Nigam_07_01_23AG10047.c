#include <stdio.h>
#include <stdlib.h>
void findmax (int [][20],int,int);
void findmin (int [][20],int, int);
void findminmax (int [][20],int,int);
void findmaxmin (int [][20],int,int);
int main(){
  int data[20][20],m,n;
  printf(" enter m and n\n");
  scanf("%d %d",&m,&n);
  for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
      if(i<m && j<n){ data[i][j]=rand()%11;}
      else data[i][j]=0;
    }
  }
   for(int i=0;i<20;i++){
     for(int j=0;j<20;j++){ printf("%d ",data[i][j]);}
     printf("\n");}
   findmax (data,m,n);
   printf("\n");
   findmin(data,m,n);
   printf("\n");
   findminmax (data,m,n);
   printf("\n");
   findmaxmin (data,m,n);
  return 0;
}


void findmax (int arr[][20],int m, int n){
  int i,j,sum=0,max=0,startrow=0,startcolumn=0;
  for(int i=0;i<m-2;i++){
    for(int j=0;j<n-2;j++){
      for(int s=i;s<i+3;s++){
	for( int t=j;t<j+3;t++){
	  sum=sum + arr[s][t];
	}
	if (sum>max){max=sum;startrow=i; startcolumn=j;}
      }
      sum=0;
    }
  }
  printf("max sum=%d\n",max);
  for(int i=startrow;i<startrow+3;i++){
    for(int j=startcolumn;j<startcolumn+3;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}


void findmin(int arr[][20],int m, int n){
  int i,j,sum=0,min=44444,startrow=0,startcolumn=0;
  for(int i=0;i<m-2;i++){
    for(int j=0;j<n-2;j++){
      for(int s=i;s<i+3;s++){
	for( int t=j;t<j+3;t++){
	  sum=sum + arr[s][t];
	}
	
      }
      if (sum<min){min=sum;startrow=i; startcolumn=j;}
      sum=0;
    }
  }
  printf("min sum=%d\n",min);
  for(int i=startrow;i<startrow+3;i++){
    for(int j=startcolumn;j<startcolumn+3;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}
void findminmax (int arr[][20],int m,int n){
  int a[m],max=0;
  for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      if(arr[i][j]>max) max=arr[i][j];
    }
    a[i]=max;max=0;}

printf("max of each row=[");
for(int i=0;i<m;i++){
  printf("%d ",a[i]);}
printf("]");
 int max1=0;
 for(int i=0;i<m;i++){
   if (a[i]>max1) max1=a[i];
 }
 printf(" max of these = %d",max1);
}
void findmaxmin(int arr[][20],int m,int n){
  int a[m],min=999;
  for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      if(arr[i][j]<min) min=arr[i][j];
    }
    a[i]=min;min=999;}

printf("max of each row=[");
for(int i=0;i<m;i++){
  printf("%d ",a[i]);}
printf("]");
 int max1=0;
 for(int i=0;i<m;i++){
   if (a[i]>max1) max1=a[i];
 }
 printf(" min of these = %d",max1);
}

