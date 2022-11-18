#include<stdio.h>
int main()
{
    int a,b,c,*p,*q,*r;
    printf("Enter 3 integers- ");
    scanf("%d%d%d",&a,&b,&c);
    //assigning pointers
    p=&a;
    q=&b;
    r=&c;
    printf("Address of a: %d\n",p);
    printf("Address of b: %d\n",q);
    printf("Address of c: %d\n",r);
    printf("Values in a, b, c = %d,%d,%d\n",a,b,c);
    //calling function
    arrange(&a,&b,&c);
    printf("Address of a: %d\n",p);
    printf("Address of b: %d\n",q);
    printf("Address of c: %d\n",r);
    printf("Values in a, b, c = %d,%d,%d\n",a,b,c);
}

void arrange(int *x,int *y,int *z )
{
    int t;
    //comparing different elements
    if(*y>*x&&*z>*x)
    {
        if(*y>*z)
        {
            //accordingly changing the numbers
            t=*y;
            *y=*z;
            *z=t;
        }
    }
    else if(*x>*y&&*z>*y)
    {
        t=*x;
        *x=*y;
        *y=t;
        if(*y>*z)
        {
            t=*y;
            *y=*z;
            *z=t;
        }
    }
    else if(*x>*z&&*y>*z)
    {
        t=*x;
        *x=*z;
        *z=t;
        if(*y>*z)
        {
            t=*y;
            *y=*z;
            *z=t;
        }
    }

}
