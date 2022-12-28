#include<stdio.h>

int main()
{
int n,k,i,j,a[1000],b[500],c;
printf("Enter size of first array");
scanf("%d",&n);
printf("Enter Values");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the size of second array");
scanf("%d",&k);
printf("Enter Values");
for(j=0;j<k;j++){
scanf("%d",&b[j]);
}
int *ptr1=&a[n], *ptr=&b[k];


return 0;
}
