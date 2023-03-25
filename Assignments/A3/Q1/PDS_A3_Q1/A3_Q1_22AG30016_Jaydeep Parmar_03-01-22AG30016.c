#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,cnt=0;
    printf("enter any 5 numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("the five number entered are\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
    if (a%2==0)
    printf("a is an even integer\n");
    else
    printf("a is an odd integer\n");
    if (b%2==0)
    printf("b is an even integer\n");
    else
    printf("b is an odd integer\n");
    if (c%2==0)
    printf("c is an even integer\n");
    else
    printf("c is an odd integer\n");
    if (d%2==0)
    printf("d is an even integer\n");
    else
    printf("d is an odd integer\n");
    if (e%2==0)
    printf("e is an even integer\n");
    else
    printf("e is an odd integer\n");

    return 0;
}
