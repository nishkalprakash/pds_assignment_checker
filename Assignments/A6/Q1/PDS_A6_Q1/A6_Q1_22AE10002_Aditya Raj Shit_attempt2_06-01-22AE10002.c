#include<stdio.h>

#define pi 3.1415926535

long long int fact(int n)       //factorial function
{
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

float pow(float x,int n)
{
   if(n==1){
    return x;
   }
   return x*pow(x,n-1);
}

double i_sin(double x)
{
    double term1,term2=0;
    double sum=0;
    for(int k=0;k<30;k+=1){
        int a,c;
        float b;
        /*a=pow(-1,k);
        b=pow(x,(2*k)+1);
        c=(double)(fact((int)(2*k)+1));*/
        //term1=(a*b)/c;
        term1=(pow(-1,(int)k)*pow(x,(int)(2*k)+1))/(double)fact((2*k)+1);
        //term2=(pow(-1,k+1)*pow(x,k+1))/fact((2*(k+1)+1));
        sum+=term1;
    }
    return sum;
}

int main()
{
    //---------------checking factorial function-----------------
   /*int n;
   printf("Enter an integer: ");
   scanf("%d",&n);
   printf("\n%d! = %lld",n,fact(n));*/

   //-----------------Checking pow function--------------------------
   /*int n;
   float x;
   printf("Enter a number: ");
   scanf("%f",&x);
   printf("Enter its power: ");
   scanf("%d",&n);
   printf("\n%f^%d! = %f",x,n,pow(x,n));*/

   double x;
   printf("%lf",(double)fact(3));
   printf("Enter the value of x for sin(x) in radians: ");
   scanf("%lf",&x);
   printf("sin(%lf) = %lf",x,i_sin(x));
}
