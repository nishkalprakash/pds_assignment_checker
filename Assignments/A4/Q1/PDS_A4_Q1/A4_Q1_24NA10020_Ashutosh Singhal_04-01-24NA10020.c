//program to find nth term of the series
//created by ashutosh singhal
// roll number-24NA10020
#include <stdio.h>
int main()
{
int i,s,n;
printf("enter a number");
scanf("%d",&n);

for(i=0;i<=n;i=i+1){
if (i%2==0){
s=i*(-1);
}
printf("%d",i+i+1);
}
}
