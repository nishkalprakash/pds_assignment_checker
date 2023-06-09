/*Name : Ashwini Raj
  Roll No : 22CH10012*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//function for random numbers
int RandIO(int l, int h)
{
    return ((rand() % (h - l + 1)) + l);
}
//function dividing list into equal sub-units
int max(int *arr, int start, int end)
{
    if (start == end)
    {
        return arr[start];
    }
    else
    {
        int mid = (start + end) / 2;
        int maxhalf1 = max(arr, start, mid);
        int maxhalf2 = max(arr, mid + 1, end);
        if (maxhalf1 > maxhalf2)
            return maxhalf1;
        else
            return maxhalf2;
    }
}

int main()
{
    srand(time(0));
    int n, p, q;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter p: ");
    scanf("%d", &p);
    printf("Enter q: ");
    scanf("%d", &q);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = RandIO(p, q);
    }
    printf("[");
    for (int i = 0; i < n - 1; i++)
    {
        printf(" %d,", arr[i]);
    }
    printf(" %d ]\n", arr[n - 1]);
    //calculating the maximum value
    printf("Max: %d\n", max(arr, 0, n - 1));
}
