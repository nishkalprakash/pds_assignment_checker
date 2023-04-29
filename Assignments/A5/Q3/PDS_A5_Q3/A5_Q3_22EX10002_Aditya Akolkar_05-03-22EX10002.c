#include<stdio.h>
#include<stdlib.h>
int n, direction, *p;
void swap (int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

void reverse(int *a)
{
    int j;
    printf("Array after reverse: ");
    for(j=n-1; j>=0; j--)
    {
        printf("%d ", p[j]);
    }
}

void cyclicshift (int *a, int direction)
{
    int k, l, m;
    for(k=0; k<(n/2); k++)
        {
            swap(&a[k], &a[n-k]);
        }
    if(direction==1)
    {
        printf("Array after Left circular Shift: ");
        for(l=1; l<n; l++)
        {
            printf("%d ", p[l]);
        }
        printf("%d ", p[0]);
    }
    else
    {
        printf("Array after Right circular Shift: ");
        printf("%d ", p[n-1]);
        for(m=0; m<(n-1); m++)
        {
            printf("%d ", p[m]);
        }
        printf("%d", p[m-2]);
    }
}
int main()
{
    int a, b;
    int i;


    /*scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n\n", a, b);*/

    printf("Enter the size of array and direction: ");
    scanf("%d %d", &n, &direction);

    p = (int*) malloc (n * sizeof(int));
    if (p==NULL)
    {
        printf("Not enough space available");
    }
    printf("Enter integers: ");
    for(i=0; i<n; ++i)
    {
        scanf("%d", p+i);
    }
    reverse(p);
    printf("\n");
    cyclicshift(p, direction);
}
