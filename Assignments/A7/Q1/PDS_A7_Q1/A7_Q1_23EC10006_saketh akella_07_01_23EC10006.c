#include<stdio.h>
#include<stdlib.h>
void fill(int d[][20],int m,int n)
{
  int x;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      x=rand()%11;
      d[i][j]=x;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d ",d[i][j]);
    }
    printf("\n");
  }
}

void findmax(int s[][20],int m,int n)
{
  int max=0;
  int sum=0;
  int t=0;
  int a,b;
  for(int t=0;t<m-2;t++){
  for(int k =0;k<n-2;k++){
    sum=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sum+=s[i+t][j+k];
    }
  }
  if(sum>max){max=sum;a=k;b=t;}
  }
  }
  for(int j=b;j<=b+2;j++){
  for(int i=a;i<=a+2;i++){
    printf("%d ",s[j][i]);
  }
  printf("\n");
  }
 printf("max sum =%d \n",max);
}

void findmin(int s[][20],int m,int n)
{
 int min=90;
  int sum=0;
  int t=0;
  int a,b;
  for(int t=0;t<m-2;t++){
  for(int k =0;k<n-2;k++){
    sum =0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sum+=s[i+t][j+k];
    }
  }
  if(sum<min){min=sum;a=k;b=t;}
  }
  }
  for(int j=b;j<=b+2;j++){
  for(int i=a;i<=a+2;i++){
    printf("%d ",s[j][i]);
  }
  printf("\n");
  }
 printf("minimum sum= %d \n",min); 
}

int main(){
 int  data[20][20];
  int m,n;
  printf("enter the no. rows and coumns u want: \n");
  scanf("%d%d",&m,&n);
  fill(data,m,n);
  findmax(data,m,n);
  findmin(data,m,n);
  
  return 0;
}
