#include <stdio.h>

#define N 100 

int main() {
    int arr[N]; 
    int n, i, j, temp;


    scanf("%d", &n);

    if (n > N) {
        printf("Error: n > %d\n", N);
        return 0;
    }

 
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    printf("Original Array: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    i = 0;
    j = n - 1;
    while (i <= j) {
        if (arr[i] < 0) {
            i++;
        } else if (arr[j] >= 0) {
            j--;
        } else {
     
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }


    printf("Rearranged Array: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
