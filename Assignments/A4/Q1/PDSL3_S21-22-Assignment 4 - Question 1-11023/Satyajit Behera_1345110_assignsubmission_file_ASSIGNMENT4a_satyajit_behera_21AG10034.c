// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block

#include <stdio.h>

void C_Repetition(int c[], int M[],
                  int index, int r, int start, int end)
{
    // Since index has become r, current combination is
    // ready to be printed, print
    if (index == r)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", M[c[i]]);
        printf("\n");
        return;
    }

    // One by one choose all elements (without considering
    // the fact whether element is already chosen or not)
    // and recur
    for (int i = start; i <= end; i++)
    {
        c[index] = i;
        C_Repetition(c, M, index + 1,
                     r, i, end);
    }
    return;
}

// The main function that prints all combinations of size l
// in M[] of size n with repetitions. This recursive function mainly
// uses C_Repetition()
void Repetition(int M[], int n, int r)
{
    // Allocate memory
    int c[r + 1];

    // Call the recursive function
    C_Repetition(c, M, 0, r, 0, n - 1);
}

int main()
{
    int l, S[100] = {}, n;
    printf(" number of elements in the set: ");
    scanf("%d", &n);
    printf("Enter the value of l   : ");
    scanf("%d", &l);
    printf("Enter array elements (separated by space) : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &S[i]);
    }

    Repetition(S, n, l);
    return 0;
}
