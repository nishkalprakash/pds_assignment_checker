/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 6
* Description :
*/
#include <stdio.h>
#include <time.h>
#define pi 3.141592653
long int fact(int n)
{
    if(n==1) return(1);
    else return(n*fact(n-1));
}
float pow(int x, int n)
{
    if(n==1) return(x);
    else return(x*pow(x,n-1));
}
double i_sin(double x)
{
    int k=0;
    double sin=0;
    for(int i=0;i<=15;i++)
    {
        sin+=(pow(x,2*k+1)*(pow(-1,k))/(fact(2*k+1)));
        k+=2;
    }
    return(sin);
}
double r_sin(double x)
{
    static int k = -2;
    double diff=0;
    if(diff<0.0000001||((2*k+1)>30)) return(1);
    else{
        diff = (pow(x,2*k+1)*(pow(-1,k))/(fact(2*k+1)));
        k+=2;
        printf("%lf",diff);
        return((double) ((pow(x,(2*k+1))*(pow(-1,k))/(fact(2*k+1)))))+r_sin(x);
    }

}
int main()
{
    double x, sin1,sin2, cpu_time_used1, cpu_time_used2;
    scanf("%lf",&x);
    x=x*2*pi/360;
    if(x>=0&&x<=360){
        clock_t start, end;
        double cpu_time_used;
        start=clock();
        sin1=i_sin(x);
        end=clock();
        printf("%lf", sin1);
        cpu_time_used1= (double) (end-start)/ CLOCKS_PER_SEC;
        start=clock();
        sin1=i_sin(x);
        end=clock();
        printf("%lf", sin2);
        cpu_time_used2= (double) (end-start)/ CLOCKS_PER_SEC;
        printf("Time difference = %lf",cpu_time_used2-cpu_time_used1);
    }
}
