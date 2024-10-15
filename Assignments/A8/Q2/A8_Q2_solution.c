/*
Write a program that does the following:
    Read the size of input array as an integer n. (n∈[0,100])	[2]
    Read the array of size n in A[a_1,a_2,…,a_n].  (a_i∈[-10^5,10^5 ])	[3]
    Sort the array A[] using any sorting technique. ((a_i≤a_(i+1)) ∀ i∈[0,n-2])	[10]
    Read an integer m from the user. (m∈[-10^5,10^5 ])	[2]
    Insert m in the sorted array while maintaining order.	[10]
    Print the sorted array.	[3]

(NOTE: The value m must be inserted into the array A[] i.e. A[] must be modified.
 No marks will be awarded if m is just printed in the correct position, i.e. without inserting)
*/

// Sort and insert
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)

#include <stdio.h>
#define MAX 100

// function to sort the array using bubble sort
void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(int arr[], int n){
    printf("\n[");
    for (int i = 0; i < n-1; i++)
        printf("%d, ", arr[i]);
    printf("%d]\n", arr[n-1]);
}

int main(){
    int n, m;
    scanf("%d", &n);
    int arr[MAX]; // array of size 100
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // sort the array
    sort(arr, n);
    scanf("%d", &m);
    int i = 0;
    // find the position where m should be inserted using linear search
    while (i < n && arr[i] < m)
        i++;
    // shift the elements to the right
    for (int j = n; j > i; j--)
        arr[j] = arr[j - 1];
    // insert m
    arr[i] = m;
    n++; // increase the size of the array
    // print the array
    print_array(arr, n);
    return 0;
}