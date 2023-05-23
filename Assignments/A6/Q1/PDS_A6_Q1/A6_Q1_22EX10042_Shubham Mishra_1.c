#include<stdio.h>
long int fact(int,long int ,int);
float power(double ,int,long int ,int );
double i_sin(double);
double r_sin(double,int,int);

double i_sin(double x)
{
  double sinx=0;
  long int value=1;
  int a=0;
  for(int i=0;i<10;i++)
  {
       int z=2*i+1;

       sinx=sinx+((power(-1,i,value,0)*power(x,z,value,0))/fact(z,value,1));


  }
  return sinx;

}
float power(double x,int n,long int f,int a)
{

    while(a<n)
    {
        f=f*x;
        a++;
        power(x,n,f,a);

    }
    return f;

}
long int fact(int n,long int f,int x)
{

    while(x<n)
    {
     x++;
     f=f*x;
     fact(n,f,x);
     }
    return f;

}
int main(){
    int n;
    printf("the value of n is");
    scanf("%d",&n);
    long int f=1;
    int a=1;
    int factorial=fact(n,f,a);
    printf("the value of factorial is %d",factorial);
    double y;
    printf("enter the value of y");
    scanf("%lf",&y);

    int b=0;
    double p=power(y,n,f,b);
    printf("the value of power is %lf",p);
    double x;
    printf("the value of x is");
    scanf("%lf",&x);
    double sinx= i_sin(x);
    printf("the value of sinx is %lf",sinx);
    //double z= r_sin(x,0,1);
     //printf("the value of sinx is %lf",z);



}
