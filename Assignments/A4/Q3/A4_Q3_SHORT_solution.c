// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print the digts in reverse in words
// This is just an example to show how short a code is possible

#include <stdio.h> 
int main(){
	long N;
	scanf("%ld",&N);
	do switch(N%10){                            // Note how the brackets are skipped as there is only one block of statement in do while
            case 0: printf("Zero  "); break;	
            case 1: printf("One  "); break;
            case 2: printf("Two  "); break;
            case 3: printf("Three  "); break;
            case 4: printf("Four  "); break;
            case 5: printf("Five  "); break;
            case 6: printf("Six  "); break;
            case 7: printf("Seven  "); break;
            case 8: printf("Eight  "); break;
            case 9: printf("Nine  "); break;
    }while(N/=10);                              // Note the use of N /= 10 which is same as N = N/10, the exp /= returns N/10 to while and stores it in N
	return 0;
}
