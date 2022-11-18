/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/



#include <stdio.h>
int main()
{
    int i, j, Poly1, Poly2;
    printf("Enter number of terms in Polynomial 1\n");
    scanf("%d", &Poly1);
    printf("Enter number of terms in Polynomial 2\n");
    scanf("%d", &Poly2);

    int a[Poly1], b[Poly2], prod[Poly1 + Poly2];
    printf("Enter Elements of Polynomial 1\n");
    for (i = 0; i < Poly1; i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 1\n", i);
        scanf("%d", &a[i]);
    }

    printf("Enter Elements of Polynomial 2\n");
    for (i = 0; i < Poly2; i++)
    {
        printf("Enter x^%d Co-Efficient of Polynomial 2\n", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < Poly1 + Poly2; i++)
    {
        prod[i] = 0;
    }

    for (i = 0; i < Poly1; i++)
    {
        for (j = 0; j < Poly2; j++)
        {
            if (a[i] != 0 && b[j] != 0)
                prod[i + j] += a[i] * b[j];
        }
    }
    for (i = Poly1 + Poly2 - 1; i >= 0; i--)
    {
        if (prod[i] != 0)
        {
            if (i != 0)
            {
                printf("%d x^%d + ", prod[i], i);
            }
            else
            {
                printf("%d x^%d\n", prod[i], i);
            }
        }
    }
}