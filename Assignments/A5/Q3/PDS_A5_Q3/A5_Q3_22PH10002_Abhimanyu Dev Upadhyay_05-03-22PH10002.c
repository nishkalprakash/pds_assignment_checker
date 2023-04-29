#include <stdio.h>

int n, direction;
void swap(int *p, int *q)
{
    int t;
    t = *q;
    *q = *p;
    *p = t;
}
void reverse(int *a,int *b)
{
    if(a != b -1)
    {
        reverse(a + 1, b);
    }
    printf("%d ", *a);
    return;
}
void cyclicShift(int *a, int direction, int *b)
{
    if(direction == 1)
    {
        if(a != b-1)
        {
            swap(a,a+1);
            cyclicShift(a + 1, direction, b);
        }
    }
    else
    {
        printf("There\n");
        if(a != b-1)
        {
            cyclicShift(a + 1, direction, b);
            swap(a,a+1);
        }
    }

    return;
}
int main()
{
    printf("Enter array size and direction: ");
    scanf("%d%d", &n, &direction);
    int a[n];

    int i;
    printf("\nEnter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray after reverse: ");
    reverse(&a,&a[n]);
    printf("\n");
    cyclicShift(&a,direction,&a[n]);
    for(int i = 0; i<n; i++)
    {
       printf("%d ", a[i]);
    }

}
