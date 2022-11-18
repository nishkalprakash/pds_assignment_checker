/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct poly {
	int n; // number of terms
	int* coefficients;
	int* exponents;
}polynomial;

polynomial extract(char* str) {
	int n = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] == '+') || (str[i] == '-'))
			++n;
	}
	polynomial p;
	p.n = n;
	p.coefficients = (int*)malloc(n * sizeof(int));
	p.exponents = (int*)malloc(n * sizeof(int));

}
int main(){
}
