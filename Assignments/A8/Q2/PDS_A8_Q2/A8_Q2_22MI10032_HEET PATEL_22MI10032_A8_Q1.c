/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 8
Description :  to find the saddle point of matrix.
*/
#include<stdio.h>
int main(){
printf("Shape of the 2D array:");
int n,m;
scanf("%d%d",&n,&m);
int a[n][m];
int pos[2][2];
for(int i = 0 ; i<n;i++){
printf("Enter element for %d row:",i);
for(int j = 0 ; j < m ; j++){
scanf("%d",&a[i][j]);
}
}


int min,j;
for(int i = 0; i < n ; i++){
min=a[i][0];
for( j = 0 ; j < m; j++){

if(min>=a[i][j]){

min=a[i][j];
pos[0][0]=i;
pos[0][1]=j;
}
}
j=pos[0][1];
int max =a[0][j];
for(int k=0;k<m;k++){
if(max<=a[i][j]){
max=a[i][j];
pos[1][0]=k;
pos[1][1]=j;
}

}
if(min==max){
if(pos[0][0]==pos[1][0]&&pos[1][1]==pos[0][1]){
printf("The saddle point is %d\n",max);
}
//else printf("There is no saddle point in this array");

}
else printf("There is no saddle point in this array\n");
}



}
