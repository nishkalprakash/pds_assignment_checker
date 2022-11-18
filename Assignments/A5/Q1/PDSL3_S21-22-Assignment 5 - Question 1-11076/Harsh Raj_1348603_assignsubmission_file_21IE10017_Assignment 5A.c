#include<stdio.h>

// Name : Harsh Raj
// Roll : 21IE10017

void rearrange(int *a,int *b,int *c)
{
    int temp=0;
    if(*a>*b)
    {  temp=*a;
       *a=*b;
       *b=temp;
    }
    if(*b>*c)
    {
        temp=*b;
       *b=*c;
       *c=temp;
    }
    if(*a>*c)
    {
        temp=*a;
       *a=*c;
       *c=temp;
    }
}
int main()
{
    int a,b,c;
    int *x,*y,*z;
    x=&a;
    y=&b;
    z=&c;
    printf("Enter 3 Numbers");
    printf("\n Address of a is %d",x);
    printf("\n Address of b is %d",y);
    printf("\n Address of c is %d",z);
    printf("\n a= ");
    scanf("%d",&a);
    printf("\n b= ");
    scanf("%d",&b);
    printf("\n c= ");
    scanf("%d",&c);
    rearrange(&a,&b,&c);
    printf("\n a= %d",a);
    printf("\n b= %d",b);
    printf("\n c= %d",c);
    printf("\n Address of a is %d",x);
    printf("\n Address of b is %d",y);
    printf("\n Address of c is %d",z);
}
