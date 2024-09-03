//code to rearrange the numbers of an array
//code creator Dipon Sarkar
//Roll No. 24NA10025

#include<stdio.h>
#define N 100
int main(){
int a[N], b[N],c[N];
int i,n,x;
printf("Enter number of elements:");
scanf("%d",&n);
if(n<=100){
for(i=0;i<=n;i++){
scanf("%d",&a[i]);
x=a[i];
printf("Original array:%d",x);

}

if(a[i]>=0){
c[i]=a[i];

printf("Rearranged array :%d",c[i]);
}

if(a[i]<0){
b[i]=a[i];

printf("Rearranged array :%d",b[i]);
}



if(n>100){
printf("Error");
}
getchar();
return 0;
}
