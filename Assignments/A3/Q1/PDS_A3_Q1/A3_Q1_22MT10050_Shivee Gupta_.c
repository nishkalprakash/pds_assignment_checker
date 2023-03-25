#include<stdio.h>
int main()
{
    int a,b,c,d,e,n_odd,n_even;
    printf("Enter 5 integers : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    n_odd = (a%2) +(b%2) +(c%2) + (d%2) +(e%2);
     n_even = (a%2) +(b%2) +(c%2) + (d%2) +(e%2);

    int max = a*(a>b)*(a>c)*(a>d) + b*(b>a)*(b>c)*(b>d) + c*(c>a)*(c>b)*(c>d) +d*(d>a)*(d>b)*(d>c);
     if (n_even==3){printf("Largest number : %d",max);
     return 0;}