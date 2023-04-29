/*Name - Vedant Katole
roll no - 22EC10087
Section - 2
Lab no - 5
problem No - 2
Description - Goldbach's conjecture*/

#include<stdio.h>

int primeCheck(int i);

void main(){
    int n, a, i, flag_prime;
    scanf("%d", &n);

    if(n < 4 || n % 2 != 0){
        printf("\n-1");
    }
    else{
        i = n-2;
        while(i > 1){
            flag_prime = primeCheck(i);
            if(flag_prime == 0){
                a = i;
                break;
            }
            else{
                i--;
            }
        }
        printf("\n%d, %d", a, n-a);
    }
}

int primeCheck(int i){
    int flag = 0;
    for(int count = 2; count < i; count++){
        if(i % count == 0)
            flag = 1;
    }
    return flag;
}
