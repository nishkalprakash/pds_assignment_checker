/*
1.	Define a global integer array named arr of size 50. 
a.	In the main function, fill the array arr with random numbers in the range of [20,100] and display the values stored in the array nicely formatted. Display the following menu:      	[3]
1: maxMin 
2: duplicate
3: highestFreq
4: largestIncreasing
5: largestDecreasing
6: removeDuplicate
in an infinite loop, first ask the user to enter an integer to the indicate the user choice. Based on the user choice, call the corresponding function. Exit when the user enters other than [1,6].
b.	maxMin: This function should display the contents of the array arr nicely formatted and then display the minimum and the maximum of the values stored in the array.                             	[3]
c.	duplicate: This function should display the contents of the array arr nicely formatted and then display all the numbers that occur more than once in the array.                                               	[3]
d.	highestFreq: This function should display the contents of the array arr nicely formatted and then should display the number that occurs with highest frequency also display the number of occurrence.                                                                                                                                      	 [3]
e.	largestIncreasing: This function should display the contents of the array arr nicely formatted and then should display the largest increasing  sequence of numbers occurring in the array. 	[4]
f.	largestDecreasing: This function should display the contents of the array arr nicely formatted and then should display the largest sequence of decreasing numbers occurring in the array. 	[4]
g.	removeDuplicate: This function should display the contents of the array arr nicely formatted and then should remove the duplicate entries and display the array.                                       	[4]

*/
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Created on: 2023/11/07 12:32pm
#include <stdio.h>
#include <stdlib.h>
#define MAXN 50
int MAX=50;
int arr[MAXN];

void maxMin();
void duplicate();
void highestFreq();
void largestIncreasing();
void largestDecreasing();
void removeDuplicate();
void displayArray(int);

int main()
{
    int i, choice;
    for (i = 0; i < MAX; i++)
    {
        arr[i] = rand() % 81 + 20;
    }
    displayArray(MAX);
    while (1)
    {
        printf("1: maxMin\n2: duplicate\n3: highestFreq\n4: largestIncreasing\n5: largestDecreasing\n6: removeDuplicate\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            maxMin();
            break;
        case 2:
            duplicate();
            break;
        case 3:
            highestFreq();
            break;
        case 4:
            largestIncreasing();
            break;
        case 5:
            largestDecreasing();
            break;
        case 6:
            removeDuplicate();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}

void displayArray(int n)
{
    int i;
    printf("Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d ", arr[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
}

void maxMin()
{
    int i, max = arr[0], min = arr[0];
    displayArray(MAX);
    for (i = 0; i < MAX; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nMax: %d\nMin: %d\n", max, min);
}

void duplicate()
{
    int i, j, k, flag = 0;
    displayArray(MAX);
    printf("\nDuplicates: ");
    for (i = 0; i < MAX; i++)
    {
        flag = 0;
        for (j = 0; j < MAX; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                for (k = 0; k < i; k++)
                {
                    if (arr[i] == arr[k])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    printf("%d ", arr[i]);
                }
                break;
            }
        }
    }
    printf("\n");
}

void highestFreq()
{
    int i, j, count, maxCount = 0, maxNum = 0;
    displayArray(MAX);
    for (i = 0; i < MAX; i++)
    {
        count = 0;
        for (j = 0; j < MAX; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxNum = arr[i];
        }
    }
    printf("Number with highest frequency: %d\nFrequency: %d\n", maxNum, maxCount);
}

void largestIncreasing()
{
    int i, j, count, maxCount = 0, maxNum = 0;
    displayArray(MAX);
    for (i = 0; i < MAX; i++)
    {
        count = 0;
        for (j = i+1; j < MAX; j++)
        {
            if (arr[j] > arr[j - 1])
                count++;
            else            
                break;
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxNum = i;
        }
    }
    printf("Largest increasing sequence: ");
    for (i = maxNum; i <= maxNum + maxCount; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void largestDecreasing()
{
    int i, j, count, maxCount = 0, maxNum = 0;
    displayArray(MAX);
    for (i = 0; i < MAX; i++)
    {
        count = 0;
        for (j = i+1; j < MAX; j++)
        {
            if (arr[j] < arr[j - 1])
                count++;
            else
                break;
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxNum = i;
        }
    }
    printf("Largest decreasing sequence: ");
    for (i = maxNum; i <= maxNum + maxCount; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void removeDuplicate()
{
    int i, j, k, n = MAX;
    displayArray(MAX);
    printf("\nDuplicates removed: ");
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n-1; k++)
                    arr[k] = arr[k + 1];
                n--;
            }
        }
    }
    displayArray(n);
    MAX = n;
}

// Path: tmp/LT2B_Q2_Solution.c