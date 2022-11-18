/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 2 Question 2

#include <stdio.h>

int maxAlphaValue(int S[], int n)
{
    int i, alpha_store[n], maximum=0,j;
    for(i=0; i<n; i++)
    {
        alpha_store[i]=0;
        for(j=0; j<i; j++)
        {

            if(S[j]%S[i]==0)
            {
                alpha_store[i]++;                              //storing alpha value for each element
            }
        }
        if(alpha_store[i]>maximum)
        {
            maximum=alpha_store[i];                           //storing maximum alpha value
        }
    }

    return maximum;                                           //returning maximum alpha value

}







int main()
{
    int n,i;
    printf("Enter size of array: ");                                      //taking size of array
    scanf("%d", &n);
    int sequence_given[n];
    printf("Enter array (e.g.: 1 2 3 4 5): ");
    for(i=0; i<n; i++)                                                    //taking elements of array
    {
        scanf("%d", &sequence_given[i]);
    }
    printf("Output : %d", maxAlphaValue(sequence_given, n));                      //printing max alpha value by calling the function



    return 0;
}

