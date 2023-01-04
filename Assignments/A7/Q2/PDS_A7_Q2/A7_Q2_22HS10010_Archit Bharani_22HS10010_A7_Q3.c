#include<stdio.h>
int main()
{
int n,i,a[100],m,count=0,t =1;
printf("Enter the number of elements of array");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter m (output all numbers that appear m times) ");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(int j=i;j<n;j++)
 {
if(a[i]==a[j]){
count++;                                           //Counting no. of times an element appears
}
 }
if(count==m)                                               //Checking if number appear m times
{
printf("%d ",a[i]);
t=0;
}
count=0;
}
if(t==1)
{
printf("No Number appears %d times",m);
}
else
printf("appears %d times",m);

return 0;
}
