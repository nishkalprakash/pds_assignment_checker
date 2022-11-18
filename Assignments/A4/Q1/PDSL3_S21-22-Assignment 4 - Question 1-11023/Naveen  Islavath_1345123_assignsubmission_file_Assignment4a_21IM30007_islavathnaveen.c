#include <stdio.h>

void repeation(int side_index[], int n[], int p_print, int p, int start, int end)
{
    if (p_print == p)
    {
        for (int i = 0; i < l; i++)
            printf("%d ", n[side_index[i]]);
        printf("\n");
        return;
    }
    for (int i = start; i <= end; i++)
    {
        side_index[p_print] = i;
        repeation(side_index, n, p_print + 1, p, i, end);
    }
    return;
}

void possible_combinations(int n[], int size, int p)
{
    int store_index[p + 1];
    recursive(side_index, n, 0, p, 0, size - 1);
}
int main()
{
    int n[] = {5, 7, 12, 3};
    int p = 3;
    int n = sizeof(b) / sizeof(n[0]);
    possible_combinations(a, n, l);
    return 0;
}