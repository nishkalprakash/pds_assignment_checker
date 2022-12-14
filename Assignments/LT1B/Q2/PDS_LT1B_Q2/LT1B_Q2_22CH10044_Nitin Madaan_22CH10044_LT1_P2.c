/*
section 14
ROLL NO : 22CH10044
Name: Nitin
*/

#include<stdio.h>
int main(){
 int N;
printf("Enter the value of n in range[2,10]:-");
scanf("%d",&N);
for(int i=1;i<=N;i++)//i= Row
{
for(int j=1;j<=i;j++)//j=column
{
printf("%d",i);
}
printf("\n");
}
 return 0;
}
