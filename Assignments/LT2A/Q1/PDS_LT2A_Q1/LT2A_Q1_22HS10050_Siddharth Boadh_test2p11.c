#include<stdio.h>
#include<stdlib.h>
int *recursive(int *a, int m, int n);
void *scan(int *a, int m, int n);

int main(){
int m;
int n;
printf("Enter the elements of row");
scanf("%d", &m);
printf("Enter the elements of column");
scanf("%d", &n);
int *a[m];
for (int i=0; i<m; i++){
a[i]=(int*)malloc(m*n)*sizeof(int));
}
for (int j=0; j<n; j++){
a[j]=(int*)malloc(m*n)*sizeof(int));
}
*scan(*a,m,n);
return 0;
}
void *scan(int *a,int m,int n)
{
for(int i=0; i<m; i++){
for(int j=0; j<n; j++){
scanf("%d", &a[i][j]);
}
printf("\n");

int *recursive(int *b, int m, int n)
{
for (int i=m-1; i=0; i--)
{
for(int j=n-1; j=0; j--)
{
printf("%d", &a[i][j]);
}
}
return a[i][j];
}




