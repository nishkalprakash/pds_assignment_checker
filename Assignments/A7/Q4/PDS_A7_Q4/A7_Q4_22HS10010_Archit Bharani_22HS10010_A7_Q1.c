#include<stdio.h>
void swap(int* x, int *y){
int temp;
temp= *x;
*x= *y;
*y= temp;
}
int main()

{
int i,n;
printf("Enter the number of integers you want to give output");
scanf("%d",&n);
int a[n];
printf("Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//Program if all single or all double digit integers are input
 for(i=0;i<n-1;i++){
  for(int j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
swap(&a[j],&a[j+1]);
}
}
}
for(i=n-1;i>=0;i--){
printf("%d",a[i]);
}
return 0;
}
