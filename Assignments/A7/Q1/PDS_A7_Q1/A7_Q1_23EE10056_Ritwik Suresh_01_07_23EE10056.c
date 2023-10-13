//Ritwik Suresh
//23EE10056
#include<stdio.h>
#include<stdlib.h>
void findmax(int a[20][20], int,int);
void findmin(int a[20][20],int,int);
int main()
{
  int a[20][20],i,j,m,n;
  printf("Enter the dimensions of the array: (2<m<20 & 2<n<20)\n");
  scanf("%d %d",&m,&n);
  if( m<3 || m>19 || n<3 || n>19)
    {
      printf("Invalid dimensions\n");
      return 1;
    }
  printf("The array is:\n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++){
	a[i][j] = rand()%11 ;
	printf("%d ",a[i][j]);
      }
      printf("\n");
    }
  findmax(a,m,n);
  findmin(a,m,n);
  return 0;
}
void findmax(int a[20][20], int m,int n)
{
  int i=0,j=0,cursum,maxsum=0,posi,posj;
  for(j=0;j<n-2;j++){
    cursum=0;
    for(i=0;i<m-2;i++){
      cursum = a[i][j]+a[i+1][j]+a[i+2][j]+a[i][j+1]+a[i+1][j+1]+a[i+2][j+1]+a[i][j+2]+a[i+1][j+2]+a[i+2][j+2];
      if(cursum>maxsum){
	maxsum = cursum;
	posi=i;
	posj=j;
      }
    }
  }
  printf("\n max submatrix:\n");
  for(i=posi;i<posi+3;i++){
    for(j=posj;j<posj+3;j++)
      {
	printf("%d  ",a[i][j]);
      }
    printf("\n");
  }
  printf("Sum : %d",maxsum);
  return;
}
void findmin(int a[20][20],int m,int n)
  {
  int i=0,j=0,cursum,minsum=250,posi,posj;
  
  for(j=0;j<n-2;j++){
    cursum=0;
    for(i=0;i<m-2;i++){
      cursum = a[i][j]+a[i+1][j]+a[i+2][j]+a[i][j+1]+a[i+1][j+1]+a[i+2][j+1]+a[i][j+2]+a[i+1][j+2]+a[i+2][j+2];
      if(cursum<minsum){
	minsum = cursum;
	posi=i;
	posj=j;
      }
    }
  }
  printf("\n min submatrix:\n");
  for(i=posi;i<posi+3;i++){
    for(j=posj;j<posj+3;j++)
      {
	printf("%d  ",a[i][j]);
      }
    printf("\n");
  }
  printf("Sum : %d",minsum);
  return;
}
	
    
  
  
 
	  
 
 

  
      
      
  
  
