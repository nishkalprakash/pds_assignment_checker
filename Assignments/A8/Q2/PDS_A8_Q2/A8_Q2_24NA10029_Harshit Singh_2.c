#include<stdio.h>
int main(){
// defining values
int a,b,c,temp;          
//code for defining array size
printf("array size : " );
scanf ("%d",&c);
int A[c];
// code for putting values of array
printf( "value of array : ");
for (a=0;a<=c;a++)
{
scanf("%d",&A[a]);
}

for (a=c;a>0;a--)
{
for ( b=0 ; b<a ; b++)
{
if(A[b]>A[b+1]){

temp = A[b];
A[b]=A[b+1];
A[b+1]=temp;
}}}
//final output 
printf("output array : " );
for( a = 0 ; a<c ;a++)
printf("%d  ",A[a]);
}
