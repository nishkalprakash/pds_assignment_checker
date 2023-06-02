#include <stdio.h>

int PerfectSquare(int n) {   //The function is used to check if the number is perfect square or not
    int temp = 0;   //Variables for checking
    while (temp*temp <= n) {   //Loop to continue if we get perfect square
        if (temp*temp== n)    //condition if some integer square is input number or not
            return 1;
        temp++;     //Updation of term
    }
    return 0;
}

int isFibonacci(int n) {    //Function to check if number is fibonacci or not
    //Here binet's formula is used to check the fibonacci number
    if( PerfectSquare(5 * n * n + 4)==1 || PerfectSquare(5 * n * n - 4)==1) return 1;
    else return 0;
}

int findNearestFibonacci(int n) {    //Function to find nearest fibonacci number
    int fibPrev = 0;
    int fibCurr = 1;     //Initial condition to create fibonacci number
    while (1) {   //Infinite loop to check the nearest fibonacci
        int fibNext = fibPrev + fibCurr;    //prev two term is added to create next sequence term
        if (n < fibCurr) {     //Checking if the number is lower than the current fibonacci number
            int diff1 = n - fibPrev;
            int diff2 = fibCurr - n;     //Checking if the number is nearest to the current fibonacci or the prev fibobnacci
            if(diff1<diff2) return fibPrev;    //The nearere fibonacci is returned
            else return fibCurr;

        }
        fibPrev = fibCurr;   //Previous is updated
        fibCurr = fibNext;   //Current is updated
    }
}

int main() {
    int input;
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &input);    //Positive number is taken as input
    }while(input<=0);    //Condition for only positive term

    if (isFibonacci(input)) {     //Fibonacci is checked
        printf("%d is a Fibonacci number.\n", input);
    } else {
        int nearestFibonacci = findNearestFibonacci(input);    //Nearest fibonacci is found
        printf("Nearest Fibonacci number: %d.\n", input, nearestFibonacci);
    }
    return 0;
}
