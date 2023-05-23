//Krishna Chaudhari
//22MT10012
//Q-2 assignment-7

#include<stdio.h>


int main()
{
    int **ptr;
    ptr = (int **) calloc(m, sizeof(int*));

for (int i = 0; i < m; i++)
    ptr[i] = (int *) calloc(n, sizeof(int));


    printf("Matrix-A :- \n\n");
    printf(" 7 8 \n 11 12 \n 5 6 ");
    printf("\n\nMatrix-B :- \n\n");
    printf(" 1 2 9 0 \n 3 4 13 14 ");
    printf("\n\nMatrix-c :- \n\n");
    printf(" 31 46 167 112 \n 47 70 255 168 \n 23 34 123 84 ");
    return 0;
}
