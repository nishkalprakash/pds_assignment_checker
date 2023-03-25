#include<stdio.h>

int main(){
int n1, n2, n3, n4, n5,t;
int a,b,c, d, e; /* storing the entered values*/
int x=-1,y=-1,z=-1; /* taking three variables to store our three odd numbers*/


printf("Enter five integers\n");
scanf("%d  %d  %d  %d  %d",&a, &b, &c, &d, &e);
/* if modulus is zero it implies that the numbers are even else they are odd*/
n1==a%2;
n2==b%2;
n3==c%2;
n4==d%2;
n5==e%2;
/* if summation of ni equals to 3 it means that three numbers are odd*/
if(n1+n2+n3+n4+n5 == 3)
{
    printf("Smallest three odd numbers:");
    if(n1!=0)
    {
        x=a;
    }
    if(n2!=0)
    {
        if(x==-1)
            x=b;
        else
            y=b;
    }
    if(n3!=0)
    {
        if(x==-1)
            x=c;
        else
            y=c;
    }
    if(n4!=0)
    {
        if(y==-1)
            y=d;
        else
            z=d;

    }
    if(n5 != 0)
    {
        if(z==-1)
            z=d;
    }
}

if(x>y && x>z )
    {
        printf("%d",x);
        if(y>z)
            printf("%d", y);
        else
            printf("%d", z);
    }
if(y>x && y>z )
    {
        printf("%d",y);
        if(x>z)
            printf("%d", x);
        else
            printf("%d", z);
    }
if(z>y && z>x )
    {
        printf("%d",z);
        if(y>x)
            printf("%d", y);
        else
            printf("%d", x);
    }


else
{
    t = fmax(a,fmax(b,fmax(c,fmax(d,e))));
    printf("Largest number:");
    printf("%d", t);
}
return 0;
}
