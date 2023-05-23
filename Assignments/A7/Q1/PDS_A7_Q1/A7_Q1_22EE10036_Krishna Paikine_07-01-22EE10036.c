#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *p, i, n, k, u, x, y, z, j, sum, length1, length2;
    // Random number generator
    srand(time(0));
    // Array for storing the factorials
    int arr[10000] = {0};
    printf("Enter the number of integers of which a array is to be formed\n");
    scanf("%d", &n);
    // Allocating memory for random numbers
    p = (int *) malloc(100 * sizeof(int));
    for(i = 0; i < n; i++)
    {
        p[i] = 2 + rand() % 1000;
    }
    // Printing the random numbers from array
    for(i = 0; i < n; i++)
    {
        length1++;
    }
    printf("%d- random number array :\n", length1);
    for(u = 0; u < n; u++)
    {
        printf("%d\n", p[u]);
    }

printf("-----------------------------------------\n");

    for(x = 1; x < n; x++)
    {
        k = p[x-1]%x;
        if(k == 0 || k == n)
        {
            arr[x-1] = x;
        }
    }


    for(z = 0; z < n; z++)
    {
        int sum = 0;
        sum += arr[z];
    }
    printf("%d", sum);

    for(j=0; j<n; j++)
    {
        printf("%d", arr[j]);
    }







    return 0;

}
