/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>

int maxAlphaValue(int S[], int n)
{
    int i, j;
    int alpha[n];

    for (i = 0; i < n; i++)
    {
        alpha[i] = 0;
        for (j = 0; j < i; j++)
        {
            if (S[j] % S[i] == 0)
            {
                alpha[i] += 1;
            }
        }
    }
    int max = alpha[0];
    for (i = 1; i < n; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("enter the value of n\n"); // taking the input for number of elements
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter array element %d\n", i + 1); // consecutively taking input of the elements
        scanf("%d", &s[i]);
    }
    int maxalpha = maxAlphaValue(s, n);
    printf("Maxalpha value is %d\n", maxalpha); // printing the output 
}