/*Name - Mohul Dutta
Roll No. - 22EC30035
Question 2
Description-Recursion*/
#include <stdlib.h>
#include <stdio.h>
int max(int *a, int n)
{
    if (n == 1)
        return a[0];
    else if (n == 2)
    {
        if (a[0] > a[1])
            return a[0];
        else
            return a[1];
    }
    int a1[n / 2], a2[n - n / 2];
    for (int i = 0; i < n / 2; i++)
    {
        a1[i] = a[i];
    }
    for (int i = 0; i < n - n / 2; i++)
    {
        a2[i] = a[i + n / 2];
    }
    int v1 = max(a1, n / 2);     // finding max in a1
    int v2 = max(a2, n - n / 2); // finding max in a2
    if (v1 > v2)
    {
        return v1;
    }
    else
        return v2;
}
int main()
{
    int n, p, q;
    scanf("%d%d%d", &n, &p, &q);
    int a[n];
    if (n == 0)
    {
        printf("Invalid Value of n");
        return 0;
    }
    else if (p > q)
    {
        printf("p should be less than equal or equal to q");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % (q - p + 1) + p;
    }
    printf("List = [");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    printf("]\n");
    printf("Max = %d", max(a, n));
}
