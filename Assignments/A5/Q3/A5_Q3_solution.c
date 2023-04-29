/*
Problem 3
A function void swap(int p, int q) {...} if called with two values p and q, then after its execution, it will interchange the values in them. For example, if p = 555 and q = -555, then after the execution of swap function, it will be p = -555 and q = 555.

Write a program to do the following:
	Define the function void swap(int p, int q).
	Define an array of integers of size n and initialize it reading n values from the user.
	Write a recursive function void reverse(int *a){…} which would reverse the ordering of the elements in the array.
For example: [1, 2, 3, 4, 5]  will be [5, 4, 3, 2, 1]
Note that you can pass an entire array a of integers to the function reverse() as  int *a. This is a special feature in C language, which you will learn in due class.

	Write another recursive function void cyclicShift (int *a, int direction) {…} which would left cyclic shift (if direction = 1) or right cyclic shift (if direction ≠ 1).
For example:
Input array: [5, 4, 3, 2, 1]
The array after left cyclic shift: [4, 3, 2, 1, 5]
The array after right cyclic shift: [1, 5, 4, 3, 2]
	Note the following:
	You may use swap() function, if necessary.
	Do not use any additional array other than the array to store the input values.
[5+15+20 = 40]
Test cases:
#	INPUT	OUTPUT
1	5 1 1 2 3 4 5	Original array: 1 2 3 4 5
Array after reverse: 5 4 3 2 1
Array after left cyclic shift: 4 3 2 1 5

2	4 -1 3 4 5 6	Original array: 3 4 5 6
Array after reverse: 6 5 4 3
Array after right cyclic shift: 3 6 5 4

3	5 1 -1 -3 4 5 6	Original array: -1 -3 4 5 6
Array after reverse: 6 5 4 -3 -1
Array after left cyclic shift: 5 4 -3 -1 6

4	5 234 -1 -3 4 5 6	Original array: -1 -3 4 5 6
Array after reverse: 6 5 4 -3 -1
Array after right cyclic shift: -1 6 5 4 -3


Solution 3:
*/



// Code creator: sairam(pativadasairam@gmail.com)
#include <stdio.h>
void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
void reverse(int *a, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(&a[start], &a[end]);
    reverse(a, start + 1, end - 1);
}
void cyclicShift(int *a, int n, int direction) {
    if (n <= 1) {
        return;
    }
    if (direction == 1) { // Left cyclic shift
        int first = a[0];
        for (int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = first;
    } else { // Right cyclic shift
        int last = a[n - 1];
        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = last;
    }
}
int main() {
    int n,direction;
    printf("Enter the size of the array and direction: ");
    scanf("%d %d", &n, &direction);
    int a[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    // Reverse the array using the recursive function reverse()
    reverse(a, 0, n - 1);
    printf("\nArray after reverse: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    cyclicShift(a, n, direction);
// Left cyclic shift the array using the recursive function cyclicShift()
    if(direction == 1){
        printf("\nArray after left cyclic shift: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
    }}
// Right cyclic shift the array using the recursive function cyclicShift()
    else{
        printf("\nArray after right cyclic shift: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
    }}
     printf("\n");
    return 0;
}

