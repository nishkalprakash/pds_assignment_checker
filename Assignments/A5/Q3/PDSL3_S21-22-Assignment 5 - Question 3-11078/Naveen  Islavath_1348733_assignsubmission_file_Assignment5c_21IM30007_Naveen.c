#include <stdio.h>
void saddlepoint(int n, int a[10][10]);
int main()
{
    int arr[10][10], num, p;
    printf("Enter size of matrix:");
    scanf("%d", &num);
    printf("Enter 2D array elements:");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of the 2D array is:");
    for (int i = 0; i < num; i++)
    {
        printf("\n");
        for (int j = 0; j < num; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    saddlepoint(num, arr);
    return 0;
}
void saddlepoint(int n, int a[10][10])
{
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        int sm = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if (sm > a[i][j])
            {
                sm = a[i][j];
                p = j;
            }
        }
        int large = 0;
        for (int j = 0; j < n; j++)
        {
            if (large < a[j][p])
            {
                large = a[j][p];
            }
        }
        if (sm == large)
        {
            printf("\nValue of saddle point:%d", sm);
            f = 0;
        }
    }
    if (f > 0)
        printf("\nNo saddle point");
}
