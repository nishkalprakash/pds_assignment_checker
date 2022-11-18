#include <stdio.h>
#include <stdlib.h>
typedef struct polynomial
{
    int terms;
    int coef;
    int pow;
    struct poly *next;
} poly;
int main()
{
    poly *poly1, *ptr1, *poly2, *ptr2, *poly3, *ptr3 = NULL;
    int sel, n, m, c = 1;

    head1 = NULL;
    printf("Enter number of terms of 1st polynomial: ");
    scanf("%d", n);
    printf("Enter elements for the first polynomial\n");
    for (int i = 0; i < n; i++)
    {
        poly1 = (poly *)malloc(sizeof(poly));
        printf("Enter Coefficient: ");
        scanf("%d", &poly1->coef);
        printf("Enter power of x: ");
        scanf("%d", &poly1->pow);
        poly1->next = ptr1;
        ptr1 = poly1;
        if (poly1->pow == 0){
            break;
        }
    }
    ptr2 = NULL;
    printf("Enter number of terms of 2nd polynomial: ");
    scanf("%d", &m);
    printf("Enter elements for the second polynomial\n");
    for (int i = 0; i < m; i++)
    {
        poly2 = (poly *)malloc(sizeof(poly));
        printf("Enter coefficient: ");
        scanf("%d", &po2->coef);
        printf("Enter power of x: ");
        scanf("%d", &poly2->pow);
        poly2->next = ptr2;
        ptr2 = poly2;
        if (poly2->pow == 0)
            break;
    }

    poly1 = ptr1;
    poly2 = ptr2;

    printf("product after multiplication:\n");

    while (poly1 || poly2)
    {
        poly2 = ptr2;
        while (poly1 && poly2)
        {
            poly3 = (poly *)malloc(sizeof(poly));
            poly3->coef = (poly1->coef) * (poly2->coef);
            poly3->pow = (poly1->pow) + (poly2->pow);
            poly3->next = ptr3;
            ptr3 = poly3;
            poly2 = poly2->next;
        }
        poly1 = poly1->next;
    }
    while (poly3)
    {
        printf("%+dx^%d", poly3->coef, poly3->pow);
        poly3 = poly3->next;
    }
    printf("\n");
}