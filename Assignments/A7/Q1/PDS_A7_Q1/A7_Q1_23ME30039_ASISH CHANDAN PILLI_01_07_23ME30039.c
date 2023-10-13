//name: PILLI ASISH CHANDAN
// r.no. 23ME30039

#include<stdio.h>
#include<stdlib.h>

int data[20][20],m,n,max=0,sum,min_sum;


int findMax(int data[][20],int m,int n){
  int i,j,a,b;
  for(i=0;i<(m-2);i++)
    {
      for(j=0;j<(n-2);j++)
      {
	sum = 0;
	for(int k=i;k<(i+3);k++)
	{
	  for(int l=j;l<(j+3);l++)
	  {
	    sum=sum+data[k][l];
	  }
	}
	if(sum>max)
	{
	  max=sum;
	  a=i;
	  b=j;
	}
      }
    }
  printf("max sub matrix: ");
  for(int k=a;k<(a+3);k++)
	{
	  printf("\n");
	  for(int l=b;l<(b+3);l++)
	  {
	    printf("%d ",data[k][l]);
	  }
	}
  
 
  return(max);
}

int findMin(int data[][20],int m,int n){
  int i,j,a,b,c,min_sum;
  int min=90;
  for(i=0;i<(m-2);i++)
    {
      for(j=0;j<(n-2);j++)
      {
        
	for(int k=i;k<(i+3);k++)
	{
	  for(int l=j;l<(j+3);l++)
	  {
	    min_sum=min_sum+data[k][l];
	  }
	}
	
	if(min_sum<min)
	{
	  min=min_sum;
	  a=i;
	  b=j;
	}
      }
    }
  printf("min sub matrix: ");
  for(int k=a;k<(a+3);k++)
	{
	  printf("\n");
	  for(int l=b;l<(b+3);l++)
	  {
	    printf("%d ",data[k][l]);
	  }
	}
  
 
  return(min);
}

void findMinMax(int data[][20],int m,int n) {
  int max=0;int a,b;int min=10;
  int arr[m][3];
  for(int i=0;i<m;i++)
    { max=0;
      for(int j=0;j<n;j++)
	{if(data[i][j]>max);
	  max=data[i][j];
	  a=i;
	  b=j;
	}
      arr[i][0] = max;
      arr[i][1] = a;
      arr[i][2] = b;
    }
  int min_ind = 0;
  for(int i=0;i<m;i++){
    if(arr[i][0]<arr[min_ind][0]){
      min_ind = i;}}
  printf("MinMax=%d present in row %d column %d",arr[min_ind][0],arr[min_ind][1],arr[min_ind][2]); }


void findMaxMin(int data[][20],int m,int n) {
  int max=0;int a,b;int min=10;
  int arr[m];
  for(int i=0;i<m;i++)
    { min=10;
      for(int j=0;j<n;j++)
	{if(data[i][j]<min);
	  min=data[i][j];
	 a=i;
	 b=j;
	}
      arr[i]=min;}
  for(int i=0;i<m;i++){
    if(arr[i]>max){
      max=arr[i];}}
  printf("MaxMin=%d present in row %d column %d",max,a,b);
}
      


int main(){
 
  printf("enter required m rows and n colums");
  scanf("%d%d",&m,&n);
  if(m>2 && m<20 && n>2 && n<20){
    for(int i=0;i<m;i++)
    {
      
      printf("\n");
      for(int j=0;j<n;j++)
	{
	data[i][j]=rand()%11;
	printf("%d ",data[i][j]);
	}
      
    }
    int s=findMax(data,m,n);
    printf("sum=%d\n",s);
    int p=findMin(data,m,n);
    printf("sum=%d",p);
    findMinMax(data,m,n);
    findMaxMin(data,m,n);
    
  }
}
	
