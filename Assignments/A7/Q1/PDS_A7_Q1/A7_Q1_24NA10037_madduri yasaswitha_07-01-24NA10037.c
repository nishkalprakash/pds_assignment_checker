//sum of first n terms
//code creator:M.Yasaswitha
//roll no:24NA10037
#include<stdio.h>
int power(int x,int n)
{
if(x==0) return 0;
else if (n==0) return 1;
for(int j=0;j<n;j++){
x=x*x;
return 1;
}
}
int fact( int n)
{
if(n==1)
return (1);
else return n*(fact(n-1));
}
int main()
{
int x,n,i;
float sum;
printf("enter");
scanf("%d %d",&x,&n);
for(i=0;i<=n;i++) {
sum= (float) power(x,n)/fact(n);
if (n<=10){
printf("sum=%f\n",sum);
}
else if(n>10){
printf("error");
}
}
return 0;
} 
