#include <stdio.h>
int fibonacci(int n) {

    if (n <= 0)
    return 0;
    else if (n == 1 || n == 2)
    return 1;
    else {

        int a = 1, b = 1, c;

        while (1) {

            c = a + b;

            if (c == n)

                return c;

            else if (c > n)

                return b;

            a = b;

            b = c;

        }

    }

}
void ISfibonacci(int m) {

    int fib_no = fibonacci(m);

    if (fib_no == m)

        printf("%d is a Fibonacci number.\n",m);
    else if(m<0){
        printf("please give positive number.");
    }

    else {

        printf("%d is not a Fibonacci number.\n",m);
        printf("The nearest Fibonacci number to is %d.\n", fib_no);
    }

}

int main() {

    int n;
    scanf("%d", &n);
    printf("value of n:%d\n",n);
    ISfibonacci(n);
    return 0;
}
