#include<stdio.h>
int main()
{
int n,arr,i,j;
printf("enter the number");
scanf("%d",&n);
int a[100];
if(n>100){
printf("error");
}
for(i=1;i<=100;i++){
scanf("%d",&a[i]);
printf("original array");
}
return 0;
}
