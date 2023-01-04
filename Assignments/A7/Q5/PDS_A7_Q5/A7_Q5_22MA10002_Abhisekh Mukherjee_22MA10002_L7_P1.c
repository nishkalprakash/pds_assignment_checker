/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:1
topic:searching and sorting 
*/

#include<stdio.h>
int larger(int a,int b,int c,int A[]);
int smaller(int a,int b,int c,int A[]);
int main()
{
int n,i,s,k;
printf("enter the size of the array\n");
scanf("%d",&n);
if(n>10 || n<0)
return 0;
int A[n];
printf("enter the elements\n");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}

int count=0;
for(i=0;i<n;i++){
   s=larger(A[i],i,n,A);
   k=smaller(A[i],i,n,A);
if(s==0 || k==0){
count++;
}
}

printf("out of order :%d\n",count);
return 0;
}
int larger(int a,int b,int n,int A[]){
int count=0;
for(int i=b+1;i<n;i++){
 if(A[i]>=a) count++;
}
if(count==n-1-b){
return 1;
}
else return 0;
}

int smaller(int a,int b,int n,int A[]){
int count =0;
for(int i=0;i<b;i++){
 if(A[i]<=a) count++;
}
if(count==b){
return 1;
}
else return 0;
}



