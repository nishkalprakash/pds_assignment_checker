#include <stdio.h>

int primecheck(int i) ;// declaring our function named primecheck

int main(){

int i; // declaring variable for our prime number

printf("Enter a prime number (>1) : ");// taking input for our prime number i
scanf("d", &i);

primecheck(i); // call the function primecheck

}
int primecheck(int i){

    for (int n=0; n<i; n++){
        if (i%n == 0){
            printf("The number is prime");
        }
        else{
            printf("The number is not prime");
        }
    }




return ;
}
