#include <stdio.h>

// Recursive function to find total ways to complete the hostel transfer
int totalWays(int n, int m, int l)
{
    // base case: invalid input
    if (n < 0) {
        return 0;
    }

    // base case: 1 (no items)
    if (n == 0) {
        return 1;
    }

    int count = 0;
    for (int i = 1; i <= m && i<=l; i++) {
        count += totalWays(n - i, m, l);
    }

    return count;
}

int main(void)
{
    int n, k, m;
    printf("Enter the number of days.\n");
    scanf("%d", &n);
    printf("Enter the number of items in your room.\n");
    scanf("%d", &k);
    printf("Enter themaximum number of items that can be carried in a single trip.\n");
    scanf("%d", &m);

    printf("Total number of journeys = %d\n",totalWays(k, m, n));

    return 0;
}
