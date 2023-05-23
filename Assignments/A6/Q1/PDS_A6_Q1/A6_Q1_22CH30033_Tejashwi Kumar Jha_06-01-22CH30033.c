#include<stdio.h>
int fact (int n)
{
    if ( n== 0 )return 1;
    long long int d = n*fact(n-1);
    return d;
}
float pow(float y,int n )
{
    if ( n == 0)return 1;
    return y*pow(y,n-1);
}

int main()
{

    int n;
    float x;

    printf("Enter your number x in  : \n");
    scanf("%f",&x);


    printf("Enter your number n : \n");
    scanf("%d",&n);

    int f = fact(n);
    int v = pow(x,n);

    double i_sin = x;
    int i = 2;
    while ( i <= n)
    {

        i_sin = i_sin * (-1)*x*x/((2*n-2)*(2*n-1));
        i++;
    }
    printf("%lf\n",i_sin);

    return 0;
}
