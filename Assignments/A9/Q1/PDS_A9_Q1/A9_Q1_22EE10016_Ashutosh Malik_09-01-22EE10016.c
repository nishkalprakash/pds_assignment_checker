#include<stdio.h>
int fib(int n){

if (n<2){
    return n;
}

else {

    return fib(n-1) + fib(n-2);
}


}
int checkfib(int n){
    for (int i = 0; i < 100000000000000000000000; i++){
        if (n == fib(i)){
            printf("The given number is a fibonnaci number and ");
            printf(" The fibonacci number is: ");
            return n;


        }

        else if(fib(i-1) < n  && n < fib(i) && (fib(i) - n) > (n - fib(i-1))){
            printf("Nearest fibonnaci number is : ");
            return fib(i-1);
        }

        else if(fib(i-1) < n && fib(i) > n && (fib(i)-n)<(n - fib(i-1))){
            printf("Nearest fibonnaci number : ");
            return fib(i);
        }

        else if(fib(i-1) < n && fib(i) > n && (fib(i)-n) == (n - fib(i-1))) {
            printf("Nearest fibonnaci number : ");
            return fib(i-1);
        }

    }




}





int main(){
int a;
printf("Write the value of n : ");
scanf("%d", &a);
if(a < 0){
    printf("Please give positive number");
}

else {
    int b = checkfib(a);
    printf("%d", b);
}

return 0;
}
