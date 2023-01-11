/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 8
Discription : To find the saddle point
*/
#include<stdio.h>
int main(){
	int c,r,i,j,k,l,saddle=0;
	printf("Shape of the 2-D array: ");
	scanf("%d %d",&r,&c);
	int a[r][c];
	printf("Elements of the 2-D array: ");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			scanf("%d",&a[i][j]);
			}
		}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			int min,max;
			for(k=0;k<c;k++){
				min=a[i][j];
				if(min>a[i][k]) min=a[i][k];
			} 
			for(l=0;l<r;l++){
				max=a[i][j];
				if(a[l][j]>max) max=a[l][j];
			}
			if((max==a[i][j])&&(min==a[i][j])){ 
						saddle=a[i][j];
						break;}
		}
	}
	if(saddle==0) 
		printf("No saddle point.");
	else
		printf("The saddle point is %d",saddle);
	return 0;
}
	
