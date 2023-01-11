/*
*	section 14
*	Name: Souvik Sarkar
*	roll no.;22ME10083
*	Assignment: 8
*	Topic:2D array & Strings
*	Question no.:
*	Programme to check the saddle point of the i/p matrix
*/
#include<stdio.h>
#include<stdlib.h>
//Declaring a global varriable
int arr[10][10];
//creating a function for saddle point
void saddle(int a[][10], int p, int q)
{
	//initializing varriables 
	int i,j,minrow[p],maxcol[q],f=0;
	minrow[0]=a[0][0];maxcol[0]=a[0][0];
	//logic
	for(i=0;i<p;i++){// runs for the minrow array
	 	for(j=0;j<q;j++)
		{ 
			if(minrow[i]>a[i][j])
				minrow[i]=a[i][j];
		}
	
	}
	for(i=0;i<p;i++){// runs for the maxcol array
	 	for(j=0;j<q;j++)
		{ 
			if(maxcol[i]<a[j][i])
				maxcol[i]=a[j][i];
		}
	
	}
	//result
	for(i=0;i<p;i++){
	 	for(j=0;j<q;j++)
		{ 
			if(minrow[i]==maxcol[j]){
				printf(" The saddle point is %d", minrow[i]);
				f++;
				}	
		}
	
	}
	if(f==0)
		printf("\nNo saddle points");
	
}
void main(){
int i,j,m,n;
//Taking inputs
	printf("Enter the shape of the matix:\n");
	scanf("%d %d",&m,&n);
//i/p of the user
	printf("Now enter the elements:\n");
	for(i=0;i<m;i++){
	 	for(j=0;j<n;j++)
		{ 
			scanf("%d",&arr[i][j]);
		}
	
	}
//o/p of the input array
	for(i=0;i<m;i++){
	 	for(j=0;j<n;j++)
		{ 
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	
	}
	saddle(arr,m,n);
}	
