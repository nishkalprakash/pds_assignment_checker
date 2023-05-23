#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,p;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);
    int **ptr;
    ptr = (int **)calloc(m, sizeof(int*));
    for(int i = 0;i < m;i++)
    {
        ptr[i] = (int *)calloc(n, sizeof(int));
    }
    return 0;
}
