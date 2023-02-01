/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:5
*/
#include<stdio.h>
int main()
{
int n,sum;
printf("Enter M; ");
scanf("%d",&n);
int a[n][n],b[n][n];
printf("enter %d numbers for M1:",n*n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("enter %d numbers for M2:",n*n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&b[i][j]);
}
}
printf("the matrix M1*M2 is ;\n");
for(int i=0;i<n;i++){
sum=0;
for(int j=0;j<n;j++){
sum=0;
for(int k=0;k<n;k++){
sum+=a[i][k]*b[k][j];
}
printf("%d",su

