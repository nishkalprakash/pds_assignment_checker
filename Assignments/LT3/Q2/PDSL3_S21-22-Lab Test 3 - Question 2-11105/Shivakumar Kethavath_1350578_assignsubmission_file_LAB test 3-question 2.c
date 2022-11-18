/* kethavath shivakumar
   21MI31013 */#include <stdio.h>
#include <stdlib.h>

typedef struct polynomial {
    int terms;
    int coef;
    int exp;
    struct polynomial *next;
} poly;

int main(void) {
    poly * po1, *head1, *po2, *head2, *po3, *head3 = NULL;
    int sel, n,m,c = 1;

    head1 = NULL;
    printf("enter no of terms of 1st polynomiabl");
    scanf("%d",&n);
    printf(
        "\nInsert elements for the first polynomial\n");
    for(int i=0; i<n; i++) {
        po1 = (poly *) malloc(sizeof(poly));
        printf("Give number: ");
        scanf("%d", &po1->coef);
        printf("Give power of x: ");
        scanf("%d", &po1->exp);
        po1->next = head1;
        head1 = po1;
        if (po1->exp == 0) break;
    }

    head2 = NULL;

    printf("enter no of terms of 2nd polynomial");
    scanf("%d",&m);
    printf(
        "\nInsert elements for the second polynomial\n");
    for(int i=0; i<m; i++) {
        po2 = (poly *) malloc(sizeof(poly));
        printf("Give number: ");
        scanf("%d", &po2->coef);
        printf("Give power of x: ");
        scanf("%d", &po2->exp);
        po2->next = head2;
        head2 = po2;
        if (po2->exp == 0) break;
    }

    po1 = head1;
    po2 = head2;

    printf("product after multiplication:\n");

    while (po1 || po2) {
        po2 = head2;
        while (po1 && po2) {
            po3 = (poly *) malloc(sizeof(poly));
            po3->coef = (po1->coef) * (po2->coef);
            po3->exp = (po1->exp) + (po2->exp);
            po3->next = head3;
            head3 = po3;
            po2 = po2->next;
        }
        po1 = po1->next;
    }
    while (po3) {
        printf("%+d(x^%d)", po3->coef, po3->exp);
        po3 = po3->next;
    }
    printf("\n");


}
