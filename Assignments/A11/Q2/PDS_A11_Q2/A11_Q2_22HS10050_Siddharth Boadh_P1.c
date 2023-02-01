#include <stdio.h>
int fibo(int n);//declaration of fibonacci function

int main()
{
int n,l=0,digit;
printf("Enter n between 1 to 100\n");// taking input from user
scanf("%d", &n);
while(1)
{
digit=fibo(l++);
if(digit==n)
{
printf("YES\n");
break;}
else if(digit>n){
printf("NO\n");
break;
}}
return 0;
}

int fibo(int n)
{
int x;
if(n==0)
{
return 0;
}
else if(n==1){
return 1;
}
else{
x = fibo(n-1) + fibo(n-2);
}
return x;
}

