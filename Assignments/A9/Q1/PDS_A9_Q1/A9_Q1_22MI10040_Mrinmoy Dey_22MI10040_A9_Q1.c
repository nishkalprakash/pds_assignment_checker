/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 9
Question :: 1
*/
#include <stdio.h>

int main(){
    long int n;
    long int m;
    int ctr = 0;
    long int fib[50];
    scanf("%ld",&n);
    printf("Value of n: %ld\n",n);
    fib[0] = 0;
    fib[1] = 1;
    for (int i=2; i<50;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    if (n>0){
        for(int i=0;i<50;i++){
            if (fib[i]==n) ctr++;
        }


    int j;
    if (ctr==0){
        for (j=0;j<50;j++){
            if (fib[j]>n) break;
        }
    }
    if ((fib[j]-n)>(n-fib[j-1])) m=fib[j-1];
    else if ((fib[j]-n)<(n-fib[j-1])) m = fib[j];
    else m = fib[j-1];
    (ctr==1)?printf("%ld is a Fibonacci number",n):printf("Nearest Fibonacci number: %ld",m);
    }
    else printf("Please give positive number");
}
