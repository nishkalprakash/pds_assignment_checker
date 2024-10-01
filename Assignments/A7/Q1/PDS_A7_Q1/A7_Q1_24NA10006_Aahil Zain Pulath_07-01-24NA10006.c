#include<stdio.h>
int power(int x, int n)//function definition for power
{
 int j;
 j=x;
 for (int i =0;i<n-1;i++)
 {
 j=j*x; 
 }
 return j;
}
int fact(int n)//function definition for factorial
{
 int j=1;
 if (n==0) return j;
 for (int i=1;i<n+1;i++)
 {
  j=j*i;
 }
 return j;
}
int main()
{
int n,x;//variable declaration
scanf("%d",&x);
scanf("%d",&n);
double s,t;
s=0.0;
for (int i=0;i<n+1;i++)
{
 float d1=(float)power(x,i);
 float d2=(float)fact(i);
 t=(d1/d2);
 s=s+t;
}
printf("%f",s);// returning of final answer 
return 0;
}
