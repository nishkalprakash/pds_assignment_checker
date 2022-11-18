#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a 3-digit number");
    scanf("%d",&a);
    b=(a%10*100+((a/10)%10)*10+a/100);
    printf("reverse number = %d",b);
    return 0;
}