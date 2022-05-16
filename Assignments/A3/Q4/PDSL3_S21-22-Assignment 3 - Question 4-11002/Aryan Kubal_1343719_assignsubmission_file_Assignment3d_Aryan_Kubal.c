/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

# include <stdio.h>

int isSorted(int A[], int n);
int linearSearch(int A[], int n, int x);
int binarySearch(int A[], int n, int x);

// main function
int main(void) {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[20];
    while (1) {
        printf("Enter the elements in sorted order: ");
        for (int i = 0; i < n; i++) { // taking the input list from user in ascending order
            scanf("%d", &A[i]);
        }

        if (!isSorted(A, n)) { // checking if the list is sorted in ascending order or not
            printf("Array not sorted. Enter again.\n");
        } else {
            break;
        }
    }

    int x;
    printf("Enter the key element x, which you want to search: ");
    scanf("%d", &x);

    int algo;
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search: ");
    scanf("%d", &algo);

    if (algo == 1) {
        printf("Executing the linear search algorithm\n");
        int index = linearSearch(A, n, x);
        if (index > 0) {
            printf("Successful search\n");
            printf("Element %d has been found at index %d\n", x, index);
        }
        printf("The element x was not found.");
    } else if (algo == 2) {
        printf("Executing the binary search algorithm\n");
        int index = binarySearch(A, n, x);
        if (index > 0) {
            printf("Successful search\n");
            printf("Element %d has been found at index %d\n", x, index);
        }
        printf("The element x was not found.");
    } else {
        printf("Invalid choice");
    }
}

// function to check if the list is sorted in ascending order or not 
int isSorted(int A[], int n) {
    for (int i = 1; i < n; i++) {
        if (A[i - 1] > A[i]) return 0;
    }
    return 1;
}

// function for linear search
int linearSearch(int A[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) return i;
    }
    return -1;
}

// function for binary search
int binarySearch(int A[], int n, int x) {
    int first = 0, last = n - 1;
    while (first <= last) {
        int mid = (first + last) / 2;
        if (A[mid] == x) {
            return mid;
        } else if (A[mid] > x) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    return -1;
}