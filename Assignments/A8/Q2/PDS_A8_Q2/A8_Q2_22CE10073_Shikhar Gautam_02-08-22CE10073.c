#include <stdio.h>
#include <stdlib.h>

struct matrix{ // defining our matrix structure

    int row;
    int column;
};

int main(){

    int ptr*; // declaring pointer variable
    ptr = (int*)calloc(row*column * sizeof(int));// demanding size to enter matrix elements

    int n; // variable for size of n

    printf("Enter matrix elements : ");

    for(int i=0; i<=row*column; i++){

        scanf("%d", &n);// taking input for matrix elements
    }









    return 0;
}
