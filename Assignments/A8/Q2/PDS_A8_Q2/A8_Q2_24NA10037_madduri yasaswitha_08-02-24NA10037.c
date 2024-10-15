#include<stdio.h>
int sort(int A[int n], int n){
int i,j,temp;
for(i=0;i<n-1;i++) {
j=A[0];
if(A[i]<A[0]) {
temp=A[0];
A[0]=A[i];
A[i]=temp;
}
}
int main()
{
int n,outputarray;
int A[n];
scanf("%d",&n);
scanf("%d",&A[n]);
int m,o;
scanf("%d,%d",&m,&o);
outputarray=sort(A[n],n);
printf("output array:%d",sort(A[n],n));
return 0; 
}
