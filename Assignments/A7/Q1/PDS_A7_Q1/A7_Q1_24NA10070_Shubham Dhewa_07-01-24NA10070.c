#include<stdio.h>

int factorial(int n){
    int factorial=1;
    for(int i=1; i<=n; i++)
    factorial=factorial*i;
    return factorial; /*defined function to calculate factorial*/
}

int power(int x, int n){
    int power=1;
    for(int i=1; i<=n; i++)
    power=power*x;
    return power; /*defined function to calculate x to the power n*/
}

int main(){
    int x, n;
    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter n : ");
    scanf("%d", &n);
    
    float sum=0;
    for(int i=0; i<=n-1; i++){
    float term = (float)power(x,i)/factorial(i); /* calling factorial and power functions to calculate a particular term of the series*/
    sum=sum+term; /* calculated the sum of the series by using looping and by calling functions*/
    }
    printf("The sum of the series is %f\n", sum);
    return 0;
}
