// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
// Recursive function to print all combinations of numbers from `1` to `m`
// having sum `k`.

int myHostelChangingTrip(int pos, int left,
                         int n, int L, int R)
{
    if (pos == n)
    {
        if (left == 0)
            return 1;
        else
            return 0;
    }
    if (left == 0)
        return 0;
    int answer = 0;
    for (int i = L; i <= R; i++)
    {
        if (i > left)
            break;
        // if the sum becomes `k`, print the combination
        answer = (answer + myHostelChangingTrip(pos + 1,
                                                left - i, n, L, R));
    }
    return answer;
}

int main()
{
    int n, k, m, i = 1;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("Enter k= ");
    scanf("%d", &k);
    printf("Enter m = ");
    scanf("%d", &m);
    // print all combinations of numbers from 1 to `m` having sum `k`
    printf("Trips = %d\n", myHostelChangingTrip(0, k, n, i, m));
    return 0;
}
