/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 3
*/

#include <stdio.h>

int max(int a, int b);
int min(int a, int b);
void mintotalIQdiff(int a[], int n, int k, int index, int sum, int maxsum);
int ans = 0;
int main()
{
    int n,m;
    printf("Enter no. of students shortlisted: ");
    scanf("%d",&n);
    printf("Enter IQs array: ");
    int IQ[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&IQ[i]);
    }

    mintotalIQdiff(IQ, n, m, 0, 0, 0);
    printf("Output: %d",ans);

}

int max(int a, int b)
{
    int max;
    max = a > b ? a : b;
    return max;
}

int min(int a, int b)
{
    int min;
    min = a > b ? a : b;
    return min;
}
void mintotalIQdiff(int a[], int n, int k, int index, int sum, int maxsum)
{

    if (k == 1) {
        maxsum = max(maxsum, sum);
        sum = 0;
        for (int i = index; i < n; i++) {
            sum += a[i];
        }

        maxsum = max(maxsum, sum);

        ans = min(ans, maxsum);
        return;
    }
    sum = 0;

    for (int i = index; i < n; i++)
    {
        sum += a[i];

        maxsum = max(maxsum, sum);

        solve(a, n, k - 1, i + 1, sum, maxsum);
    }
}

