#include <stdio.h>

int maxAlphaValue(int s[])
{
    int maxAlpha = 0;

    for (int i = 0; s[i] != 0; i++) // condition s[i]!=0 to break the loop
    {
        int alpha = 0;
        for (int j = 0; j < i; j++)
        {
            if (s[j] % s[i] == 0)
                alpha++;
        }
        if (alpha > maxAlpha)
            maxAlpha = alpha; // reassigning value of maxAlpha after loop for every element
    }

    return maxAlpha;
}

int main()
{
    int n;
    printf("Enter the length of array:");
    scanf("%d", &n);

    // Asking for the length of the array

    int s[n + 1];
    printf("Enter array s[]: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    s[n] = 0; // when 0 encountered loop will be ended in the function

    int maxAlpha = maxAlphaValue(s);
    printf("\nOutput:%d", maxAlpha);
    return 0;
}
