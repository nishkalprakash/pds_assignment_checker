#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,e,sum=0,max=0;
    printf("Enter 5 integers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int a1=a%2,a2=b%2,a3=c%2,a4=d%2,a5=e%2;
    sum=a1+a2+a3+a4+a5;


    if (sum==3) {;}
    if (sum==2) {
            if (a>=b) {
            max=a;}
    else {
        max=b;}
    if (c>=max) {
            max=c;}
    if (d>=max) {
        max=d;}
    if (e>=max) {
        max=e;}
    printf("Largest Number:%d\n",max);}
    return 0;


}