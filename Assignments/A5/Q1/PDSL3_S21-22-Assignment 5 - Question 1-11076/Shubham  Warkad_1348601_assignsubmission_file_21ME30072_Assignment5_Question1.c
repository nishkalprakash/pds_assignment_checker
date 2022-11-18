//Name:-Shubham Gajanan Warkad
//Roll No. 21ME30072
//Lab Assignment-5       Question-1
#include <stdio.h>
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void sort(int *x, int *y, int *z)
{
    if (*x > *y)
        swap(x, y);
    if (*y > *z)
        swap(y, z);
    if (*x > *y)
        swap(x, y);
}
int main()
{
    int a, b, c;
    printf("\nEnter three integers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n----Before function call----");
    printf("\nAddress of a = %d", &a);
    printf("\nAddress of b = %d", &b);
    printf("\nAddress of c = %d", &c);
    printf("\nValues in a,b,c = %d , %d , %d ", a, b, c);
    sort(&a, &b, &c);
    printf("\n----After function call----");
    printf("\nAddress of a = %d", &a);
    printf("\nAddress of b = %d", &b);
    printf("\nAddress of c = %d", &c);
    printf("\nValues in a,b,c = %d , %d , %d ", a, b, c);

    return 0;
}

