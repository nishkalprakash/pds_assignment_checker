// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 5

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0, max, min, range, k, bins, x, y, t, p=0;

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    printf("\nEnter the array elements: ");
    for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    }

//FINDING RANGE OF THE ARRAY
    for(i = 0; i < n; ++i)
    {
        if (ptr[i+1]>=ptr[i])
            max = ptr[i];
        else 
            max = ptr[i+1];
    }

    for(i = 0; i < n; ++i)
    {
        if (ptr[i+1]<=ptr[i])
            min = ptr[i];
        else 
            min = ptr[i+1];
    }

    range = (max - min + 1);

    printf("\nEnter the number of bins: ");
    scanf("%d", &bins);

    k = range/bins;
 
    //SORTING THE ARRAY
    for (x = 0; x < n; x++) {
 
        for (y = x + 1; y < n; y++) {
 
            if (*(ptr + y) < *(ptr + x)) {
 
                t = *(ptr + x);
                *(ptr + x) = *(ptr + y);
                *(ptr + y) = t;
            }
        }
    }

    //PRINTING
    for (i = 1; i!=bins; i++)
    {
        printf("\nbin%d-> ", i);
    
        for (int j = 0; j<range; j++)
            {
                printf("%d,", *(ptr+j));
            }
    }
    return 0;

}

