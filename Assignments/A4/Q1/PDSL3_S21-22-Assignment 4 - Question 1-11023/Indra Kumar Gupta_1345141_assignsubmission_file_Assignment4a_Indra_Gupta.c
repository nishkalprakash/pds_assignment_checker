/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 4(a)

#include <stdio.h>
int k=0, lo=0, combi[100];
int all_combination(int a[], int l, int n)
{



    int i, j, m;
    if(k==l)
    {

        for(i=0; i<l; i++)
        {
            m=combi[i];
            printf("%d", a[m]);
        }
        printf("\n");

    }

    for(i=lo; i<n; i++)
    {
        combi[k]= i;
        k++;
        lo=i;
        all_combination(a, l, n);

    }

}

int main()
{
    int j, l, n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the array(e.g.: 1 2 3 4 5 6)e.g.: ");
    int array[n];
    for(j=0; j<n; j++)
    {

        scanf("%d", &array[j]);

    }
    printf("Enter the integer(length): ");
    scanf("%d", &l);

    all_combination(array, l, n);







}
