#include<stdio.h>
#include<stdlib.h>
int *recurr(int *b,int m,int n);//fxn for recurr
void *scan(int *b,int m,int n);//fxn for scanning

int main(){
int m,n;
printf("enter row and column");
scanf("%d %d",&m,&n);
int *b[m][n];
for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
            b[i][j]=(int*)malloc((m*n)*sizeof(int));// memory alloc for 2d array
                    }
                              }
*scan(b,m,n);
*recurr(b,m,n);

return 0;}

void *scan(int *b,int m,int n){
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d", &b[i][j]);
}printf("\n");}

int *recurr(int *b,int m,int n){
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("%d",b[i][j]);}}
return b[i][j];}














































