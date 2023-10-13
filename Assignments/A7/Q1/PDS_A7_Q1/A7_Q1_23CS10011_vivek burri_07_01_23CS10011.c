// name vivek
// roll no 23CS10011
#include<stdio.h>
#include<stdlib.h>
int data[20][20];
void findmax(int a[][20],int m,int n);
void findmin(int a[][20],int m,int n);
int main(){
  int i,j,m,n;
  printf("enter row and data values");
  scanf("\n%d %d",&m,&n);
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      data[i][j]=rand()%11;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++)
      printf("%d ",data[i][j]);
    printf("\n");
  }
  findmax(data,m,n);
  
  return 0;
}
void findmax(int a[][20],int m,int n){
  int i,j,s=0,b=0,c[3][3];
  for(i=0;i<m-3;i++){
    for(j=0;j<n-3;j++){
      s=0;
      for(int q=i;q<i+3;q++){
	for(int w=j;w<j+3;w++){
	  s+=data[q][w];
	  printf("%d ",s);
	}
      }
      if (s>=b){
	b=s;
	s=0;
	
	for(int q=i;q<i+3;q++)
	  for(int w=j;w<j+3;w++)
	    c[q-i][w-j]=data[i][j];
	      }
      
    }
    s=0;
  }
 
  
 printf("sum is %d",b);
  for(i=0;i<3;i++){
    for(j=0;j<3;j++)
      printf("%d",c[i][j]);
    printf("\n");
  }
  return ;
}
      
    
    
