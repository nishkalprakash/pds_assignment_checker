// A3_Q2_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print day in words within range [20-99]

#include <stdio.h>
int main()
{
	int N;								// Stores the inputted integer (User Defined)
	printf("Enter N [20-99] : ");
	scanf("%d", &N);					// Assume I/P to be valid unless specified otherwise
	switch(N/10){						// Printing Tens digit in words
		case 2:	printf("Twen");  break;
		case 3: printf("Thir");  break;
		case 4: printf("For"); 	 break;
		case 5: printf("Fif");	 break;
		case 6:	printf("Six");	 break;
		case 7: printf("Seven"); break;
		case 8: printf("Eigh");  break;
		case 9: printf("Nine"); 
	} 
	printf("ty ");				 		// Common in all, printed here
	switch(N%10){				 		// Printing Ones digit in words
		case 0: printf("\n"); 	 break;
		case 1:	printf("One"); 	 break;
		case 2:	printf("Two");	 break;
		case 3: printf("Three"); break;
		case 4: printf("Four");  break;
		case 5: printf("Five");	 break;
		case 6:	printf("Six");	 break;
		case 7: printf("Seven"); break;
		case 8: printf("Eight"); break;
		case 9: printf("Nine");
	}
	return 0;
}
