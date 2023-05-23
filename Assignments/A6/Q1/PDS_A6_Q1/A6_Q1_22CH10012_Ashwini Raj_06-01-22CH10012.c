#include<stdio.h>
#include<time.h>
clock_t start, end;
long int fact(int n);
double r_sin(double x);
double i_sin(double x);                 //defined as mentioned recursive function
float pow(float x, int n);

int main()
{ int n = 200;
 int facto = fact(2*n +1);
  int p = pow(x, 2*n + 1);
  double x;
  printf("x = ");
  scanf("%lf", &x);
 //printing m
  double m = r_sin(double x);
  printf("%lf ", m);
  return 0;


}
//using defined recursive function
int fact(int n){
    if(n==1){return(1);}
    else if(n!=1) {return(n*fact(n-1));}
}
float pow(float x, int n){
    return(pow(x,n));
}
double r_sin(double x)
{
    int p, facto;
    int facto = fact(2*n +1);
    int p = pow(x, 2*n + 1);
    //calculating the values
    double sin  = p/facto;
    return(sin);
}
}