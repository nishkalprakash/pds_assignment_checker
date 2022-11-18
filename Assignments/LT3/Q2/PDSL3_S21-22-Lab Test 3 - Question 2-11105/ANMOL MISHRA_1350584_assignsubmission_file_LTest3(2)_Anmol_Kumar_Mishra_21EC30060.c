#include <stdio.h>
#include <stdlib.h>
//NAME- ANMOL KUMAR MISHRA
// ROLL NO.- 21EC30060
// SECTION- 3
// SUBJECT - PDS LAB TEST-3
// QUESTION 2
void output(int p[], int m) //function for printing the polynomial.
{
        for (int a=0; a<m; a++)
        {
                printf("%d", p[a]);
                if (a != 0)
                        printf("x^%d",a);
                if (a != m-1)
                        printf(" + ");
        }
}

int *product(int first[], int second[], int m, int n)
{
        int *final=(int*)malloc((m+n-1)*sizeof(int));  //declaring an array to store the coefficents of the product polynomial.
        for (int a = 0; a<m+n-1; a++)
                final[a] = 0; //initialising each coefficient to zero.
        for (int a=0; a<m; a++)
        {
                for (int b=0; b<n; b++)
                        final[a+b] += first[a]*second[b]; //calculating and adding to the coefficents of the product polynomial, using maths.
        }
        return final;
}

int main()
{
        int m, n; //m = degree of the first polynomial, n = degree of the second polynomial.
        printf("Enter the degree of the first polynomial: "); //taking the degree of the polynomial
        scanf("%d", &m);
        int first[m+1]; //declaring an array of size = degree + 1 to store the coefficents.
        printf("Enter the coefficients terms of x(in increasing order of the exponents of x) of the first polynomial: ");
        for(int i=0; i<m+1; i++) scanf("%d", &first[i]);
        printf("First polynomial is ");
        output(first, m+1); //function for printing the polynomial.
        printf("\nEnter the degree of the second polynomial: "); //taking the degree of the polynomial
        scanf("%d", &n);
        int second[n+1]; //declaring an array of size = degree + 1 to store the coefficents.
        printf("Enter the coefficients terms of x(in increasing order of the exponents of x) of the second polynomial: ");
        for(int i=0; i<n+1; i++) scanf("%d", &second[i]);
        printf("Second polynomial is ");
        output(second, n+1); //function for printing the polynomial.
        int *final= product(first, second, m+1, n+1); //creating 'final' to store the coefficients of the product polynomial.
        printf("\nProduct of the two polynomials is ");
        output(final, m+n+1); //function for printing the polynomial.
        return 0;
}