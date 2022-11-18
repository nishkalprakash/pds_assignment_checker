/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>

int n;
int maxAlphaValue(int S[]) // Takes the sequence as arguments and returns maxAlpha
{
    int maxAlpha = 0, Alpha;
    for (int i = 1; i < n; i++)
    {
        Alpha=0;
        for (int k = 0; k < i; k++)
        {
            if (S[k] % S[i] == 0) // Checks if ith element is divisible or not and according to that increases the value of alpha
            {
                Alpha++;
            }
            if (Alpha > maxAlpha) // Makes sure that maxAlpha is the largest of all Alpha.
            {
                maxAlpha = Alpha;
            }
        }
    }
    return maxAlpha;
}

int main()
{
    printf("Enter the number of elements in the sequence.\n");
    scanf("%d", &n);//Reads the number of element in the sequence.
    int S[n];
    printf("Enter the elements of the sequence\n");
    for (int i = 0; i < n; i++) // Reads the element from the user.
    {
        scanf("%d", &S[i]);
    }
    printf("The maximum value of alpha among all values is %d", maxAlphaValue(S));
    return 0;
}