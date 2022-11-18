
// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
int n;
int maxAlphaValue(int S[])
{
    // initialisation of varibles
    int count = 0;
    int maxvalue = 0;
    int j = 0, k = 0;
    while (j < n)
    {
        // checking the divisibility of number with the previous numbers of that array
        for (k = 0; k < j; k++)
        {
            if (S[k] % S[j] == 0)
                count++;
        }
        // updating the count the maximum  number of divisibility
        if (count > maxvalue)
            maxvalue = count;
        count = 0;
        j++;
    }
    return maxvalue;
}
int main()
{
    int i = 0;
    printf("Enter the number of elements (to be added to the array) in the array:");
    // taking the input from the user
    scanf("%d", &n);
    int S[n];
    printf("Enter the elements of the array:\n");
    // taking the input from the user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &S[i]);
    }
    // calling of the function
    printf("%d", maxAlphaValue(S));
    return 0;
}
