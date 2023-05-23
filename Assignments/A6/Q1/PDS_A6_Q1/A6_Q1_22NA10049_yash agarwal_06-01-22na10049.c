
/*
* Section 2
* Roll No : 22NA10049
* Name : Yash Agarwal
* Assignment No : 4
* Description : sin
*/

#include <stdio.h>
#include <time.h>

int fact (float n)
{
    if(n==1)
        return(1);
    else
        return (n*fact(n-1));

}

float pow(float x,int n )
{
    if(n==1)
      return x;
    else
    {
        x=x*pow(x,n-1);;

    }
}

double i_sin(double x)
{
    double s=x;
   int i=1;
   int k=-1;
   while(i<1000)
   {
     s=s + (k*pow(x,2*i+1))/fact(2*i+1);
     i++;
     k=k*-1;
   }
   return s;

}

double r_sin(double x,int i,double rs,int k)
{



   i++;
   if(i<1000)
   {
     rs=rs + r_sin(x,i,(k*pow(x,2*i+1))/fact(2*i+1),k*-1);
   }

   if(i==100)
    return rs;

}

int main()
{
    float x;
    scanf("%f",&x);
    clock_t start,end;
    double cpu_time_used;

    start=clock();
     printf("%lf \n",i_sin(x*3.1415926535/180));

      printf("%lf \n",r_sin(x*3.1415926535/180,1,0,1));
      end=clock();
      cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;

      printf("%f",cpu_time_used);

}
