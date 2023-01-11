#include<stdio.h>

int main(){
int a[100][100];
int i,j,r;
printf("Number elements in one row =");//enter number of elements
scanf("%d" ,&r);
for(i=0;i<r;i++){
for(j=0;j<r;j++){//taking input in a[i][j] form and printing back in a[j][i] form
scanf("%d" ,&a[i][j]);}}
printf("Column Major Order :");
for(i=0;i<r;i++){
for(j=0;j<r;j++){
printf("%d",a[j][i]);
}}
return 0;
}


