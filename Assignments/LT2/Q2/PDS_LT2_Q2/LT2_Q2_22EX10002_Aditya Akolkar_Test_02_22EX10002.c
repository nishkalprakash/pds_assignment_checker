/*Name:-Aditya Akolkar
 Roll no:-22EX10002
 Sec:-2
 Set:-B*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void merge (int *x, int *y, int *z, int a, int b)
{
    int i=0, j=0, k=0, p;
    while ((i < a) && (j < b))
    {
        if (x[i] < y[j])
        {
            z[k] = x[i];
            i++;
        }
        else
        {
            z[k] = y[j];
            j++;
        }
        k++;
    }
    if (i == a)
    {
        for (p=j; p<b; p++)
        {
            z[k] = y[p];
            k++;
        }
    }
    else
    {
        for (p=i; p<a; p++)
        {
            z[k] = x[p];
            k++;
        }
    }
}


void merge_sort (int *A, int n)
{
    int i, j, a, b;
    int *B, *C;
    if (n > 1)
    {
        a = n/2;
        b = n - a;
        B = (int *) malloc (a * sizeof(int));
        C = (int *) malloc (b * sizeof(int));
        for (i=0; i<a; i++)
            B[i] = A[i];
        for (j=a; j<b; j++)
            C[j-a] = A[j];
        merge_sort (B, a);
        merge_sort (C, b);
        merge (B, C, A, a, b);
        free(B);
        free(C);
    }
}

void max(int *num, int n)
{
    merge_sort(num, n);
    printf("%d", num[n-1]);
}



int main()
{
    int n, p, q;
    int i;
    int ans;
    int *a;

    scanf("%d", &n);
    scanf("%d %d", &p, &q);

    if(n == 0)
    {
        printf("Invalid value of n");
        return 0;
    }

    if(q<p)
    {
        printf("p should be less than equal to q");
        return 0;
    }

    a=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        a[i] = rand()%(q-p+1)+p;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("largest numbet in set is:");
    max(a, n);

    return 0;
}

