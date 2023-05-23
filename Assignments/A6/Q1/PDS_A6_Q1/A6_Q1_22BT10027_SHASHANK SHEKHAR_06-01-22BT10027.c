#include<stdio.h>
#include<time.h>
int k = 1;
int t = 1;
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}
float pow(float x,int n)
{
    if(n>1)
        return x*pow(x,n-1);
    else
        return x;
}
double i_sin(double x)
{
    int i = 1,j=1;
    long long int f;
    double s=0.0,p;
    for(i=1;i<20;i=i+2)
    {
        f = fact(i);
        p = pow(x,i);
        s = s+1.0*j*p/f;
        j=j*(-1);
    }
    return s;
}
double r_sin(double x)
{
    if(k<20)
    {
        long long int f = fact(k);
        double p = pow(x,k);
        return (t*p/f)+r_sin(x);
        k=k+2;
        t = t*(-1);
    }
    else
        return 0.0;
}
int main()
{
    double x1;
    printf("Enter the value of x\n");
    scanf("%lf",&x1);
    x1 = x1*3.1415/180;
    clock_t s1,e1,s2,e2;
    double ctu1,ctu2;
    double sin1,sin2;
    s1 = clock();
    sin1 = i_sin(x1);
    e1 = clock();
    s2 = clock();
    sin2 = r_sin(x1);
    e2 = clock();
    ctu1 = ((double)(e1-s1))/CLOCKS_PER_SEC;
    ctu2 = ((double)(e2-s2))/CLOCKS_PER_SEC;
    printf("Iterative and Recursive\n");
    printf("%lf , %lf\n",sin1,sin2);
    printf("cpu time for iterative and recursive are : %lf , %lf",ctu1,ctu2);
}
