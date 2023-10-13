//T.Sritan Reddy
//23AE10036

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void findmax(int m,int n,int data[20][20]);

int main(){
  int data[20][20];
  int m,n;
 printf("enter m,n \n");
  scanf("%d %d",&m,&n);

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){           //creating the matrix
      data[i][j]=rand()%10;
    }
  }

  for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
     printf("%d   ",data[i][j]);        //printing matrix
   }
   printf("\n");
 }

 

 return 0;
  }

void findmax(int m,int n,int data[20][20]){
  int  maxsum=0,sum=0,n1,m1;

  for(int k=0;k<m;k++){
   for(int l=0;l<n;l++{
     int i=k, j=l;
     int imax=i+3, jmax=j+3;

   for( i=k;i<imax;i++){
     for( j=l;j<jmax;j++){
       sum+=data[i][j];
     }}

   if(maxsum<sum){maxsum=sum;
     m1=k;
     n1=l;}
     }
	 }}


   for(int a=0;a<m1+3;a++){
   for(int b=0;j<n1+3;b++){
     printf("%d   ",data[i][j]);        //printing matrix
   }
   printf("\n");
 }
}
   

    
 
