#include<stdio.h>
#define PI 3.1415926535
#include<time.h>
clock_t start, end;
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 6
Description: Calculation of sin(x)
*/

//Recursive function to calculate factorial of a number
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

//Recursive function to calculate value of x raise to the power n
float pow(float x, int n){
    if(n==0){
        return 1;
    }
    else{
        return x*pow(x,n-1);
    }
}

 //Iterative function to calculate value of sin(x)
double i_sin(double x){
    int n=15;
    for(int i=0;i<=n;i++){
        x += (pow(-1,i)*pow(x,2*i+1))/fact(2*i+1);
    }
    return x/2;
}

//Recursive function to calculate value of sin(x)
double r_sin(double x){
    static int n=1;
    if(n==15){
        return 1;
    }
    else{
        return x + (pow(-1,n+1)*pow(x,2*n+2))/fact(2*n+2);
    }
}

int main()
{
    float x, cpu_time_used1, cpu_time_used2;

    printf("Enter value of x: ");
    scanf("%f",&x);

    x*=(PI/180);

    start = clock();
    printf("\ni_sin(x) = %f\n",i_sin(x));
    end = clock();
    cpu_time_used1 = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime used by CPU to execute i_sin(x) is %f\n",cpu_time_used1);

    start = clock();
    printf("\nr_sin(x) = %f\n",r_sin(x));
    end = clock();
    cpu_time_used2 = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime used by CPU to execute r_sin(x) is %f\n",cpu_time_used2);

    printf("\nTime difference between execution of i_sin(x) and r_sin(x) is %f\n", cpu_time_used1 - cpu_time_used2);
    return 0;
}
