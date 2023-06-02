#include <stdio.h>
#include <math.h>
int main()
{
    int fib=1, n, pfib=0, check1=0, check2=0, t;
    scanf("%d", &n);
    printf("Value of n: %d");
    for(int i=0;i>=0;i++){, n
        t=fib;
        fib+=pfib;
        pfib=t;
        check1 = fabs(n-pfib);
        check2 = fabs(n-fib);
        if(n>=0){
            if((pfib+check1+check2)==fib){
                if(check1==0||check2==0){
                 printf("%d is a Fibonacci Number", n);
                 break;
                }
                else if(check1<=check2){
                    printf("Nearest Fibonacci Number: %d", pfib);
                    break;
                }
                else{
                        printf("Nearest Fibonacci Number: %d", fib);
                        break;
                }
            }
            else continue;
        }
        else printf("Please give positive number"); break;
    }
}
