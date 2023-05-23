#include<stdio.h>


int main()
{
    int a,i;
    long int b;
    long long int d;
    float m;
    char c[100];
    char k;
    printf("enter integer \n");
    scanf("%d",&a);
    printf("you have entered integer %d \n",a);

    printf("enter long integer \n");
    scanf("%ld",&b);
    printf("you have entered long integer %ld \n",b);


    printf("enter long long integer \n");
    scanf("%lld",&d);
    printf("you have entered long long integer %lld \n",d);


    printf("enter real number \n");
    scanf("%f",&m);
    printf("you have entered real number %f \n",m);

    printf("enter single character \n");
    scanf("%c",&k);
    printf("you have entered charcter %d \n",k);

     printf("enter input of string \n");
    scanf("%s", c);
    printf("you have entered charcters %s \n",c);


    return 0;
}
