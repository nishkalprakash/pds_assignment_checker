#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter a, b, c, d, e: \n");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
if(  a%2!=0 && c%2!=0 && e%2!=0 && a<d && a<e && b<d && b<e && c<d && c<e );

{
printf("smallest three odd numbers  %d%d%d\n", a,c,e);
}
if (e>a && e>b && e>c && e>d)
{
    printf("largest number is %d\n", e);
}

return 0;
}


