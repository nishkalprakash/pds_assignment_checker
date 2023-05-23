/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 6
* Description : caluclation of sin(x) using functions and reccursions.
*question : 1
*/
#include<stdio.h>
long long int fact(long long int n)
{
    if(n<2)
    {
        return n;
    }
    return n*fact(n-1);
}
/*int main()
{
    long long int k=20,j;
    j=fact(k);
    printf("%lld" , j);
    return 0;
}*/
float pow(float x, int n)
{
    if(n==1)
    {
        return x;
    }
    return x*pow(x, n-1);
}
/*int main()
{
    int i=5;
    float j=2.5,k;
    k=pow(2.5, 5);
    printf("%f" , k);
    return 0;
}*/
double i_sin(double x)
{
    int n;
    double a;
    a=x;
    for(n=1;n<8;n++)
    {
        a+=(pow(-1, n)*pow(x, 2*n+1))/fact(2*n+1);
    }
    return a;
}
/*int main()
{
    double x,p,q;
    printf("give the value of x in degrees : ");
    scanf("%lf" , &x);
    p=(x/180)*3.1415926535;
    q=i_sin(p);
    printf("the value is :%lf" , q);
    return 0;
}*/
double r_sin(double x)
{
    int n=7;
    double a;
    if(n==0)
    {
        a=x;
        return x;
    }
    n--;
    return  a+(pow(-1, n)*pow(x, 2*n+1))/fact(2*n+1);

}




int main()
{
    double x,p1,q1;
    double q2,p2;
    printf("give the value of x in degrees : ");
    scanf("%lf" , &x);
    p1=(x/180)*3.1415926535;
    q1= i_sin(p1);
     p2=(x/180)*3.1415926535;
   q2 =r_sin(p2);
    printf("the (%lf, %lf)" , q1,q2);
    return 0;

}


