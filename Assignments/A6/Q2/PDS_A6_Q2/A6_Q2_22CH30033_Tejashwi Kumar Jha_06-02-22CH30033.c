#include<stdio.h>
int main()
{
    char format[5];

    int a;
    printf("Enter your integer input :\n");
    scanf("%d",&a);

    long int b;
    printf("Enter your long integer input :\n");
    scanf("%ld",&b);

    long long int c ;
    printf("Enter your long long integer input :\n");
    scanf("%lld",&c);

    float d;
    printf("Enter your floating input :\n");
    scanf("%f",&d);

    char e;
    printf("Enter your character input :\n");
    scanf(" %c",&e);

    char f[1000000];
    printf("Enter your string input :\n");
    scanf("%s",f);

}
