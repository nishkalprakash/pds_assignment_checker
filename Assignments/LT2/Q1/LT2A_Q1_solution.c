/*
LT2_Q1A:
Finding mean using recursion
Given a list of numbers [a_1,a_2,…,a_n ], the mean is defined by
μ=1/n ∑_(i=1)^n a_i 
In this regard, write a program to :
	Read a list of integers from the user and store them in an array.
The size of the array should be exactly same as the total numbers entered by the user.
	Write a recursive function: int mean(int *a){…}
to calculate the mean value of the numbers stored in the array.
[Hint: to calculate the mean of L numbers, 
 - Divide the list into 2 equal sub-lists, L_1 and L_2.
 - Mean of L is the mean of L_1 and L_2. i.e. μ=  (μ_1+μ_2)/2= mean(L).]
Print the numbers stored in the list. 
Also, print the mean value calculated.
*/
// Code Creator: Nishkal Prakash (nishkal@iitkgp.ac.in)

#include <stdio.h>
#include <stdlib.h>

// Function to recursively calculate mean of a list of numbers
float mean(int *a, int n)
{
    if (n == 1)
		return a[0];
	else
		return (mean(a, n-1)* (n-1) + a[n-1]) / n;
}

int main()
{
    int n;
    int *a;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Allocate memory for the list
    a = (int *)calloc(n,sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Print the list
    if (n == 1)
        printf("List: [%d]\n", a[0]);
    else{
        printf("List: [");
        for (int i = 0; i < n-1; i++)
            printf("%d, ", a[i]);
        printf("%d]\n", a[n-1]);
    }
    // Print the mean
    printf("Mean: %.2f\n", (float) mean(a, n));
    return 0;
}


