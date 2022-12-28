/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 6
Description : Perform operations on sets
*/

#include <stdio.h>                                            // Includes the standard IO header file
#include <stdlib.h>

int* BuildSet(int *A, int n) {
    A = (int *) malloc (n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    return A;
}

int SearchSet(int *A, int a, int x) {
    for(int i = 0; i < a; i++) {
        if(A[i] == x) return 1;
    }
    return 0;
}

int* Union(int *A, int a, int *B, int b, int *union_size) {
    int i, *U;
    U = (int *) malloc((a + b)*sizeof(int));
    for(i = 0;i < a; i++) {
        *(U + 1) = *(A + i);
        union_size++;
    }
    for(int j = 0; j < b, j++) {
        if(!SearchSet(U, i+j+1, *(B + j))) {
            *(U + i + j) = *(B + j)
            union_size++;
        }
    }
    return U;
}

int* Intersection(int*A, int a, int *B, int b, int *inter_size) {
    int i, *I;
    I = (int *) malloc((a + b)*sizeof(int));
    for(i = 0;i < a; i++) {
        if(SearchSet(B, b, *(A + i)))
        *(I + 1) = *(A + i);
        inter_size++;
    }
    return I;
}

int* Difference(int*A, int a, int *B, int b, int *diff_size) {
    int *I, inter_size = 0, *D;

    I = (int *) malloc ((a+b)*sizeof(int));
    I = Intersection(A, a, B, b, inter_size);
    I = (int *) realloc (I, inter_size*sizeof(int));

    D = (int *) malloc (a*sizeof(int));

    for(int i = 0; i<a; i++) {
        if(!SearchSet(I, inter_size, *(A+i))) {
            *(D+i) = *(A+i);
            diff_size++;
        }
    }
    return D;
}
void PrintSet(int *A, int n) {
    for(int i = 0; i<n; i++) {
        printf("%d ", *(A+i));
    }
    printf("\n");
}

int main() {
    
    int *A, *B, c, a, b, c2, inter_size = 0, union_size = 0, diff_size = 0;
    printf("Size of A = ");
    scanf("%d", &a);
    A = BuildSet(A, a);

    printf("Size of A = ");
    scanf("%d", &b);
    B = BuildSet(B, b);

    while(1){
        scanf("%d", &c);
        if(c==1){
            scanf("%d", &c2);
            if(SearchSet(A, c2)) {
                printf("%d is present in A", c2);
            }
            else {
                printf("%d is NOT present in A", c2);
            }
            printf("\n");
        }
        else if(c==2){
            scanf("%d", &c2);
            if(SearchSet(B, c2)) {
                printf("%d is present in B", c2);
            }
            else {
                printf("%d is NOT present in B", c2);
            }
            printf("\n");
        }
        else if(c==3) {
            printf("Union : ");
            PrintSet(Union(A, a, B, b, union_size), union_size);
            printf("\n");
        }
        else if(c==4) {}
    }
    return 0;
}