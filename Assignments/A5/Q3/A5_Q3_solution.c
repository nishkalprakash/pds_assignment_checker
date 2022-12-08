// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to emulate guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0)); // Set a random seed
    int r=rand()%100+1,n=5,G; // r=Random Number, n=Number of tries, G=users guess
    while(n--){
        printf("Enter a number [1-100]: ");
        scanf("%d",&G); // Take user input
        if(G==r){
            printf("Winner!\n");
            return 0; // to break and stop the program
        }
        (G>r)? printf("Your guess is too big.\n"):printf("Your guess is too small.\n"); // Ternary operator to print
    }
    printf("Loser: The number was %d\n",r);
    return 0;
}
