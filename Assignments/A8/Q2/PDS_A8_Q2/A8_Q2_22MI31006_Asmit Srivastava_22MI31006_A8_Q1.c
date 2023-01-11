#include<stdio.h>
int main(){
int n,m;
printf("Shape of 2D array:");
scanf("%d%d" ,&n,&m);// for rows and columns

int arr[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
  scanf("%d",&arr[i][j]);
}
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){ // enter numbers lengthwise
printf("%d",arr[i][j]);
}
printf("\n");
}
printf("There is no saddle point in this 2D array");


return 0;
}

