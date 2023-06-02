#include<stdio.h>
int main()
{
    double i=0,j=1,s=0,n,p,q,k;
    scanf("%lf",&n);
    if(n<0){printf("please enter positive number");}

    while(s<n)
    {
        s=i+j;
        i=j;
        j=s;
    }
    if(n>0){
    k=i;
    p=(n-k);
    q=(s-n);
    if(s==n){printf("%lf is a fibonacci number",n);}
    else if(p>q){printf("%lf is a nearest fibonacci number",s);}
    else {printf("%lf is a nearest fibonacci number",k);}}
}
