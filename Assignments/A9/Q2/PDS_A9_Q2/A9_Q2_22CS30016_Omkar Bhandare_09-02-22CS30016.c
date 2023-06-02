/*

Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 09
Description - n-dimensional vectors
*/

#include<stdio.h>
#include<stdlib.h>
struct vector
{
    int n;
    int *a
};

int isOrthogonal(struct vector x, struct vector y)
{
    int sum = 0;
    for(int i=0; i<x.n; i++)
    {
        sum = sum + (x.a[i] * y.a[i]);
    }
    if(sum==0) return 1;
    else return 0;
}

int isIdentical(struct vector x, struct vector y)
{
    float ratio;
    int flag = 0;
    ratio = (float) x.a[0] / (float) y.a[0];
    for(int i=1; i<x.n; i++)
    {
        if(((float) x.a[i] / (float) y.a[i]) != ratio) flag ++;
    }
    if(flag == 0) return 1;
    else return 0;
}

int main()
{
    int dim1, dim2;

    scanf("%d", &dim1);
    struct vector x;
    x.n = dim1;
    x.a = malloc(dim1*sizeof(int));
    for(int i=0; i<dim1; i++)
    {
        scanf("%d", &x.a[i]);
    }

    scanf("%d", &dim2);
    struct vector y;
    y.n = dim2;
    y.a = malloc(dim2*sizeof(int));
    for(int i=0; i<dim2; i++)
    {
        scanf("%d", &y.a[i]);
    }

    if(x.n!=y.n)
    {
        printf("Vectors are of different dimension");
    }

    else
    {
        if(isOrthogonal(x,y)) printf("Vectors are orthogonal");
        else if(isIdentical(x,y)) printf("Identical Vectors");
        else printf("The vectors are neither similar nor orthogonal");
    }
    return 0;
}
