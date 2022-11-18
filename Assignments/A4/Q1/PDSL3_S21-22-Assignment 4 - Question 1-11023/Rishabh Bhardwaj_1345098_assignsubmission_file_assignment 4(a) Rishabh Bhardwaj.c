/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/

#include<stdio.h>
#include<math.h>



int combination(int a[], int l, int m)
{
    int i, t, p;

    // total number of combinations
    t = pow(m,l);

    for (i=0; i<t;i++)
    {
        printf("%d ", a[i]);

        // recursion
        combination(a, l-1, m);

        printf("\n");

        p++;
    }
}

int main(void)
{
    int a[20], i , l, m;

    // enter the number of element you want to execute.
    printf("Enter Number of integer: ");
    scanf("%d", &m);

    // enter the each element one by one.
    for (i=0 ;i<m ;i++)
    {
        printf("Enter element of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // enter the length of combination you want
    printf("Enter the value of length: ");
    scanf("%d", &l);

    // executing the recursive function
    combination(a, l, m);


}
