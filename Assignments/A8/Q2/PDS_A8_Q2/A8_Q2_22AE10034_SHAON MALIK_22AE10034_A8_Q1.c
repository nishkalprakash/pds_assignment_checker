/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :8
 Question No :1
 Description: To find the saddle point 
*/

#include <stdio.h>

int max(int a[][100],int r,int c,int n1,int n2)
{
	int m=a[0][c];
	for(int i=0;i<n1;i++){
	  if(a[i][c]>m)
		m=a[i][c];
     }
	return m;
}

int min(int a[][100],int r,int c,int n1,int n2)
{
	int m=a[r][0];
	for(int j=0;j<n2;j++){
	  if(a[r][j]<m)
		m=a[r][j];
     }
	return m;
}


int main(){

    int n1,n2,i,j,f;
	printf("Shape of the 3D array : ");
	scanf("%d %d",&n1,&n2);
	int a[n1][n2];
	printf("enter the elements  : ");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
           scanf("%d",&a[i][j]);
		}
	}

	printf("the elements are:  ");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
           printf("%d ",a[j][i]);
		}
		printf("\n");
	}


   for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
           if(max(a,i,j,n1,n2)==min(a,i,j,n1,n2)){
           	printf("saddle point: %d",a[i][j]);
           	f++;
           }
		}
	}
   
   if(f==0)
   	printf("no saddle point found!");
}   