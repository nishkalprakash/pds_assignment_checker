#include<stdio.h>
#include<stdlib.h>

void exchange(int* mp, int* np);
void sortascending(int* p, int* q, int* r);

int main()
{
    int a, b, c;
    printf("Give the value for a : ");
    scanf("%d", &a);

    printf("Give the value for b : ");
    scanf("%d", &b);

    printf("Give the value for c : ");
    scanf("%d", &c);

    printf("Before calling the function : \n");
    printf("Address of a = %d\n", &a);
    printf("Address of b = %d\n", &b);
    printf("Address of c = %d\n", &c);
    printf("Values of a,b,c : %d, %d, %d \n", a,b,c);

    sortascending(&a, &b, &c);

    printf("After function call : \n");
    printf("Address of a = %d\n", &a);
    printf("Address of b = %d\n", &b);
    printf("Address of c = %d\n", &c);
    printf("Values of a,b,c : %d, %d, %d ", a,b,c);
    return 0;
}

void sortascending(int* p, int* q, int* r)
{
    int arr[5];
    arr[0]= *p;
    arr[1]= *q;
    arr[2]= *r;

    for (int i = 0; i < 3 - 1; i++)
    {
        // Last i values are aldready at their respective places
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                exchange(&arr[j], &arr[j + 1]);
        }
    }

    *p = arr[0];
    *q = arr[1];
    *r = arr[2];
}

void exchange(int* mp, int* np)
{
    int temp = *mp;
    *mp = *np;
    *np = temp;
}
