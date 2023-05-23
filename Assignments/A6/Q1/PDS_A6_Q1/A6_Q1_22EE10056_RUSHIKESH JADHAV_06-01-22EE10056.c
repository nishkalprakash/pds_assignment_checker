/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-6
Description:-*/
#include<stdio.h>
#include<limits.h>
#include<time.h>
#define PI 3.1415926535
int j;
long int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    {
        return n*fact(n-1);
    }

}
float pow(float x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return x*pow(x,n-1);
    }
}
double i_sin(double x)
{
    double sum=0;
    int i;
    for(i=0;i<=(j-1)/2;i++)
    {
        sum+=(pow(x,2*i+1)*pow(-1,i)/fact(2*i+1));
    }
    return sum;
}
double r_sin(double x,int k)
{
    if(k==0)
    return x;
    else
    {

        return (pow(x,2*k+1)*pow(-1,k)/fact(2*k+1)) +r_sin(x,k-1);
    }
}
int main()
{

    double x,iter,recur,t1,t2,diff;
    int i=1,k;
    long long int pro=1;
    clock_t start,end;
    printf("Enter angle for which sinx is clculated:");
    scanf("%lf",&x);
    x*=PI/180.0;
    while(1)
    {
        j=i;
        pro*=i;
        if(pro<0)
        {
            j--;
            break;
        }
        i++;

    }
    k=(j-1)/2;
    start=clock();
    printf("sinx after iterative function sinx=%lf\n",i_sin(x));
    end=clock();
    t1=start-end;
    start=clock();
    printf("sinx after recursive function sinx=%lf\n",r_sin(x,k));
    end=clock();
    t2=start-end;
    if(t1 > t2)
    diff=t1-t2;
    else
    diff=t2-t1;
    printf("difference in cpu time=%lf Clocks per cycle",diff);
    return 0;
}
