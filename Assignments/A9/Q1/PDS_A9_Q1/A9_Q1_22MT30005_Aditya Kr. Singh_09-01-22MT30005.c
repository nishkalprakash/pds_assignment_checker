#include<stdio.h>

int main()
{
    int n,x,y,z;
    printf("Value of n: ");
    scanf("%d", &n);

    if(n>=0)
    {
        printf("%d\n", n);
    }
    else
    {
        printf("Give a Positive integer");

    }

x=0;
y=1;
while(z<=n)
{
    z=x+y;
    printf("%d\n",z);
    x=y;
    y=z;
}

if(z==n)
{
    printf("The given number is a fibonacci number");

}
else
{
    printf("The given number is not a fibonacci number");

}











return 0;
}
