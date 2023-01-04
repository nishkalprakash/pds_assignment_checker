#include<stdio.h>
int main()
{
int n,i,m;
printf("Enter the number of elements in array ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array in sorted order\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number you want to insert in the sorted array ");
scanf("%d",&m);
int b[n+1],k=0;
for(i=0;i<n;i++)
{
if(m>a[i] && m<a[i+1]){                         //Finding place to insert m
   for(int j=0;j<=i;j++){
b[k]=a[j];
k++;
} 
b[k]=m;                              //Inserting m and creating new array
k=i+2;
for(int j=i+1;j<n;j++)                     
{
b[k]=a[j];
k++;
}
for(i=0;i<n+1;i++){
printf("%d\n",b[i]);
}
}
}

int l=1;
if(m<a[0]){
b[0]=m;
for(i=0;i<n;i++){
b[l]=a[i];
l++;
}
for(i=0;i<n+1;i++){
printf("%d\n",b[i]);
}
}
return 0;
}
