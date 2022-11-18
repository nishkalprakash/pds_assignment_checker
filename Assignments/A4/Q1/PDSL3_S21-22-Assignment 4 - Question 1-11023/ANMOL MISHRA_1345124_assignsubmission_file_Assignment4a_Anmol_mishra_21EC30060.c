#include <stdio.h>
void recursive(int store_index[], int a[], int print_index, int l, int begin, int finish)
{
    if (print_index == l)
    {
        for (int i = 0; i < l; i++)
            printf("%d ", a[store_index[i]]);
        printf("\n");
        return;
    }
    for (int i = begin; i <= finish; i++)
    {
        store_index[print_index] = i;
        recursive(store_index, a, print_index + 1, l, i, finish);
    }
    return;
}
void possible_combinations(int a[], int array_size, int l)
{
    int store_index[l + 1];
    recursive(store_index, a, 0, l, 0, array_size - 1);
}
int main()
{
    int array_size;
    printf("Enter the size of the array.\n");
    scanf("%d", &array_size);
    int a[array_size];
    printf("Enter the array.\n");
    for (int i = 0; i < array_size; i++)
        scanf("%d", &a[i]);
    printf("[");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d", a[i]);
        if (i != array_size - 1)
            printf(", ");
        else
            printf("]\n");
    }
    printf("\n");
    int l;
    printf("Enter the value of l.\n");
    scanf("%d", &l);
    possible_combinations(a, array_size, l);
    return 0;
    
}