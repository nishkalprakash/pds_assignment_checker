/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int minTotalIqDiff(int m, int arr[]);                // defining the functions
bool isValid(int arr[], int n, int m, int curr_min); // defining the functions
int findmin(int arr[], int n, int m);                // defining the functions
int minTotalIqDiff(int m, int arr[])                 // defining the functions
{
    int n = sizeof(arr);
    int Iq = findmin(arr, n, m);
    return Iq;
}
bool isValid(int arr[], int n, int m, int curr_min)
{
    int studentsRequired = 1;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > curr_min)
            return false;
        if (curr_sum + arr[i] > curr_min)
        {
            studentsRequired++;
            curr_sum = arr[i];
            if (studentsRequired > m)
                return false;
        }
        else
            curr_sum += arr[i];
    }
    return true;
}
int findmin(int arr[], int n, int m)
{
    long long sum = 0;
    int max = arr[0];
    if (n < m)
        return -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    int start = max, end = sum;
    int result = INT_MAX;
    int temp = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isValid(arr, n, m, mid))
        {
            if (mid < temp)
                temp = mid;
            result = (result, mid);
            end = mid - 1;
        }

        else
            start = mid + 1;
    }
    return result - temp;
}

int main()
{          // calling the main function
    int m; // declaring integers
    int n;
    printf("enter n:");
    scanf("%d", &n); // taking input from user
    printf("Enter array: ");
    int array[n]; // declaring a array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]); // taking enteries of array from user
    }
    printf("Enter m: ");
    scanf("%d", &m);
    printf("output: ");
    int output = minTotalIqDiff(m, array); // calling out the defined function
    printf("%d", output);
}
