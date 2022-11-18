# include<stdio.h>
//function to sort an array
void arraySort(int arr[], int n)
{
    int i, a, j;
    for (i = 0; i < n; ++i)
    {

        for (j = i + 1; j < n; ++j)
        {

            if (arr[i] > arr[j])
            {

                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;

            }

        }

    }
}
//function to find the maximum element of an array
int arrayMax(int arr[], int n)
{
    int i;
    for (int i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    return arr[0];
}
//function to find maximum alpha value
int maxAlphaValue(int S[], int n)
{
    int i, alpha[30], j, alpha_max;
    // arraySort(S, n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            alpha[j]=0;
            if(S[i+1]%S[j]==0)
            {
                alpha[j]++;

            }
        }

    }
    int n1=sizeof(alpha)/sizeof(alpha[0]);
    arrayMax(alpha, n1);
    return alpha_max;

}
int main()
{
    int s[30], i, n;
    //taking input from the users.
    printf("Enter the size of the sequence.\n");
    scanf("%d", &n);
    printf("Enter array s[ ]: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &s[i]);

    }
    int alphaMax= maxAlphaValue(s, n);
    printf("Output: %d\n", alphaMax);
    return 0;
}
