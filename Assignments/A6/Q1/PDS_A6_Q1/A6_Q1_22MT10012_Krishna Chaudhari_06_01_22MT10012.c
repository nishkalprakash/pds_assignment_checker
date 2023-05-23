#include<stdio.h>
#include<math.h>


float fact(float l)
{
    double k=1;
    for(float i=1; i<=(2*l+1); i++)
    {
        k=k*i;
    }
    return k;
}
float po(double x,int n)
{
    float p;
    p=pow(x,2*n+1);
    return p;
}
double term(int x){
    double t;
    for(double t=0;t<100,t++;){
        t=t+(po(x,t)/fact(t));
    }
    return t;
}

int main()
{
   int pi=3.1415926535;
   double x;
    printf("Enter the angle : ");
   scanf("%lf",&x);
   printf("factorial is : %lf \n",fact(x));
   printf("power term is : %lf \n",po(x,10));
    double h;
    h=po(x,10)/fact(x);
   printf("xyz : %lf \n",h);
   double r=0;
   for(int e=0;e<=10;e++){
    r=r+(pow(-1,e))*(po(x,e)/fact(e));
   // r=pow(-1,e)*r;
   }
   printf("value of sin is %lf",r);

    return 0;
}
