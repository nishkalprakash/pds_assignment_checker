/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:5
question 2
 */
#include<stdio.h>
int gcd(int a,int b)
{
int i;
for(i=1;i<a;i++)
{
if(a%i==0&&b%i==0)
return i;
}
}
int coprime(int a,int b)
{
if(gcd(a,b)==1)
printf("they are coprime");
}
int main()
{


