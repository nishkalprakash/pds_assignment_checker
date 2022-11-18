// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
void arrange(int a[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
int main()
{
    int a[3];
    printf("Enter three integers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("----Before function call----\n");
    printf("Address of a=%d\n", a);
    printf("Address of b=%d\n", a + 1);
    printf("Address of c=%d\n", a + 2);
    arrange(a);
    printf("----After function call----\n");
    printf("Address of a=%d\n", a);
    printf("Address of b=%d\n", a + 1);
    printf("Address of c=%d\n", a + 2);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
}
