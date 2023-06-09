/*
name-ishita pathunda
roll-22EX10022
*/
#include <stdio.h>

#include <stdlib.h>


float mean(int *a, int n) {

    if (n == 0) {

        return 0.0;

    } else {

        return (a[n - 1] + mean(a, n - 1) * (n - 1)) / n;

    }

}


int main() {

    int n;



    scanf("%d", &n);


    int *array = (int *)malloc(n * sizeof(int));



    for (int i = 0; i < n; i++) {

        scanf("%d", &array[i]);

    }
    printf("List=[");
    for (int i=0;i<n;i++){
        printf("%d, ",array[i]);
    }

    printf("]\n");


    float average = mean(array, n);


    printf("Mean value: %.2f\n", average);


    free(array);


    return 0;

}
