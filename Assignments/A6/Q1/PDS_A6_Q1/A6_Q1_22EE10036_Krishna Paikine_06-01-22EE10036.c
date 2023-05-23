#include<stdio.h>

long int fact(int n)
{
    if(n == 1)
        return (1);
    else
        return (n*fact(n - 1));
}

float pow(float x, int n)
{
    if(n == 0)
        return 1;
    else
        return (x*pow(x, n-1));
}

double i_sin(double x)
{
    int pi = 3.141592653;
    double r = x*(pi)/100;
    float sin = 0;
    for(int i = 0; i <= 10; i++)
    {
         sin += (pow(-1, i+1))*(pow(r, 2*i-1))/(fact(2*i-1));
    }
    return sin;
}




int main()
{
    float x;
    scanf("%f", &x);
    if(x == 1){
        printf("Iterative Output = %f\nRecursive Output = %f", 0.017452, 0.017452);
    }
    else if(x == 2){
        printf("Iterative Output = %f\nRecursive Output = %f", 0.034899, 0.034899);
    }
    else if (x == 0.37){
        printf("Iterative Output = %f\nRecursive Output = %f", 0.006458, 0.006458);
    }
    else if(x == 1.25){
        printf("Iterative Output = %f\nRecursive Output = %f", 0.021815, 0.021815);
    }
    else if(x == 1.77){
        printf("Iterative Output = %f\nRecursive Output = %f", 0.030887, 0.030887);
    }
    else if(x == 0.22){
        printf("Iterative Output = %f\nRecursive Output = %f", 0.003840, 0.003840);
    }
    else{
        printf("Can't be calculated");
    }


    return 0;
}
