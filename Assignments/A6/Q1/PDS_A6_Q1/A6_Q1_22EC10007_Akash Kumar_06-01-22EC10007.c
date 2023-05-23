/*
Section 2
Roll number : Akash Kumar
Assignment 6
Question 1
Description : Calculation of sine value by iterative and recursive functions
*/

#include <stdio.h>
#include <time.h>

long long int fact(int n)
{
  if (n == 1)
  {
      return 1;
  }
  return n * fact(n-1);
}

float raised(float x, int n)  // pow is already defined, so i used raised
{
    if (n == 1)
    {
        return x;
    }
    return x * raised(x, n-1);
}

double i_sin(double x)
{
    int n = 1;
    float a = 0;
    int b = -1;
    long long int c = 0;
    double ite = 0;
    while(n != 21)
    {
        a = raised(x, n);
        b = b*(-1);
        c = fact(n);
        ite += a*b/c;
        n = n+2;
    }
    return ite;
}

/*
double r_sin(double x)
{
    float a = raised(x, n);
    int b = b*(-1);
    long long int c = fact(n);

    if (n == 21)
    {
         = (a*b)/c;
    }

}
*/

int main()
{
    float x;
    printf("Enter the number x\n");
    scanf("%f", &x);

    clock_t start, end;
    double itime; // iteration function time;
    start = clock();

    double ite = i_sin((x*3.1415926535)/180);
    printf("ite = %lf\n", ite);

    end = clock();
    itime = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution time for iterative function is %lf", itime);

    return 0;
}
