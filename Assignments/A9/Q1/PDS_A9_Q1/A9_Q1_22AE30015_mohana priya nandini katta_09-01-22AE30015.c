#include<stdio.h>
#include<math.h>
int f(int n)
{
    int a,b;
if (n<2) return (n);
else{
    a=f(n-1);
    b=f(n-2);

    return (a+b);

}
int main()
{
    /*int n;
    printf("Enter the n value:");
    scanf("%d",&n);*/
    printf("Fib(n) is:%d",f(n));
    return f(n);
}

 /* int f(n) = f(n-1)+f(n-2);

  if (n<2){
    printf("The Fibonacci number is:%d ",n);
    return n;
  }
  else {
    printf("The Fibonacci value is:%d",f(n));
    return f(n);

  }*/

