#include<stdio.h>
void sort(int *x,int *y,int *z)
{
    int temp;
    if(*x>*y)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
    if(*y>*z)
    {
        temp=*z;
        *z=*y;
        *y=temp;
    }
    if(*x>*y)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
}
int main()
{
    int a,b,c;
    printf("Enter the values of a,b,c\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    printf("Address and values of a,b,c before function call\n");
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("Address of a=%p\n",&a);
    printf("Address of b=%p\n",&b);
    printf("Address of c=%p\n",&c);
    sort(&a,&b,&c);
    printf("After function call\n");
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("Address of a=%p\n",&a);
    printf("Address of b=%p\n",&b);
    printf("Address of c=%p\n",&c);
    return 0;
}