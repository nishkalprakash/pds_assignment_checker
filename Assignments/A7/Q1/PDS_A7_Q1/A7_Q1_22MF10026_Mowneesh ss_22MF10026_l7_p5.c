#include<stdio.h>
int main()
{
int A[6];
int x;
printf("enter 5 numbers :");
for (int i=0; i<=4; i++){
scanf("%d", %A[i]);
}
printf("enter the 6 number");
scanf("%d", &x);
if(x<A[0]){
A[5]=A[4];
A[4]=A[3];
A[3]=A[2];
A[2]=A[1];
A[1]=A[0];
A[0]=x;
}
if(A[0]<x && A[1]<x){
A[5]=A[4];
A[4]=A[3];
A[3]=A[2];
A[2]=A[1];
A[1]=x;
}
if(A[1]<x && A[2]<x){
A[5]=A[4];
A[4]=A[3];
A[3]=A[2];
A[2]=x;
}
if(A[2]<x && A[3]<x){
A[5]=A[4];
A[4]=A[3];
A[3]=x;
}
if(A[3]<x && A[4]<x){
A[5]=A[4];
A[4]=x;
}
if(A[4]>x){
A[5]=x;
}
printf(" output array is:");
for( int j=0; j<=5; j++){
printf("%d", A[j]);
}
return 0;
}
