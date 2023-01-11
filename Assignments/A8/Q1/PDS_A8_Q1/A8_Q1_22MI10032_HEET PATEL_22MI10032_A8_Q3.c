/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 8
Description :  to print elements in column major order.
*/ 
#include<stdio.h>
int main(){
printf("Enter number of elements in one row:");
int n;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++){
for(int j = 0 ; j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("\n");
printf("Column major order:");
for(int i = 0 ; i < n; i++){
for(int j = 0 ; j < n ; j++){
printf("%d ",a[j][i]);

}


}
}
