/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 5(b)
*/

#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum element of the array
int maxEle(int * arr, int n) {
    int maxElem = arr[0];
    for (int i = 1; i < n; i++) if (maxElem < arr[i]) maxElem = arr[i];
    return maxElem;
}

// Function to find the minimum element of the array
int minEle(int * arr, int n) {
    int minElem = arr[0];
    for (int i = 1; i < n; i++) if (minElem > arr[i]) minElem = arr[i];
    return minElem;
}

// Function to count how many elements occur in each bin
int * countElem(int * arr, int n, int bins) {
    int * count = (int *)malloc(bins * sizeof(int));                            // Allocate space for count array to store count in each bin
    for (int i = 0; i < bins; i++) count[i] = 0;                                // Initialize each count to 0
    int min = minEle(arr, n), max = maxEle(arr, n);
    for (int i = 0; i < n; i++) {                                               // Go through each element of arr
        for (int k = 0; k < bins; k ++) {                                       // Go through range of each bin
            int r1 = min + k*(max-min+1)/bins;                                  // lower limit of each bin
            int r2 = r1 + (max-min+1)/bins;                                     // upper limit of each bin
            if (arr[i] >= r1 && arr[i] < r2) {
                    count[k]++;
                    break;
            }
        }
    }
    return count;
}

int ** bins(int * arr, int n, int numBins) {
    int ** binarr = (int **)malloc(numBins*sizeof(int*));                       // Allocate space for bin 2d array
    int * count =  countElem(arr, n, numBins);                                  // Get count for each bin
    int * index = (int *)malloc(numBins*sizeof(int));                           // Allocate space for an index array to keep track of how many elements are added to binarr
    for (int i = 0; i < numBins; i++) {
        binarr[i] = (int*)malloc(count[i]*sizeof(int));                         // Allocate space for each bin
        index[i] = 0;                                                           // Initialize each element of index array to 0
    }
    int minE = minEle(arr, n), maxE = maxEle(arr, n);
    for (int i = 0; i < n; i++) {                                               // Go through each element of arr
        for (int k = 0; k < numBins; k ++) {                                    // Go through range of each bin
            int r1 = minE + k*(maxE-minE+1)/numBins;                            // lower limit of each bin
            int r2 = r1 + (maxE-minE+1)/numBins;                                // upper limit of each bin
            if (arr[i] >= r1 && arr[i] < r2) {
                binarr[k][index[k]] = arr[i];
                index[k]++;
                break;
            }
        }
    }
    return binarr;
}

int main() {
    // INPUT
    int n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);
    int * arr = (int *)malloc(n*sizeof(int));                                   // Allocate space for array of elements
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int binNumber;
    printf("Enter the number of bins: ");
    scanf("%d", &binNumber);
    // Get bin 2d array and count array
    int ** binsArr = bins(arr, n, binNumber);
    int * countArr = countElem(arr, n, binNumber);

    //OUTPUT
    printf("\n\nBINS ARE:\n");
    for (int i = 0; i < binNumber; i++) {
        printf("bin%d-> ", i+1);
        for (int j = 0; j < countArr[i]-1; j++) printf("%d, ", binsArr[i][j]);
        printf("%d  ", binsArr[i][countArr[i]-1]);
        printf("Number of elements in bin%d = %d\n", i+1, countArr[i]);
    }
    return 0;
}
