/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Lab Test No.:1
Description: Program to print armstrong numbers less than inputted value.
*/

#include<stdio.h>
#include<math.h>
int is_Armstrong(int x)
{
int y=x,d=0,z=x,f=1,v=0;
while(y!=0)
{
int a=y%10;
d++;
y=y/10;
}
while(z!=0)
{
int b=z%10;
v=v+pow(b,d);
z=z/10;
}
return v;
}
int main()
{
int N;
printf("Enter the value of N<1000000\n");
scanf("%d",&N);
if(N>0&&N<1000000)
{
for(int i=1;i<=N;i++)
{
if(i==is_Armstrong(i))
printf("%d\t",i);
}
}
else
printf("Invalid Input");
return 0;
}
