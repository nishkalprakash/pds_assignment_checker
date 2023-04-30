//22PH10002
//Lab 5 Problem 1
//Arrays

#include <stdio.h>
#define N 100

int main()
{
    //Defining array size
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    if(n>N)
    {
        n = 100;
    }

    printf("%d\n",n);
    int a[n];

    //Entering array elements
    printf("\nEnter array elements\n");
    int i;
    printf("\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");

    //Printing original array
    printf("Original array ");
    for(i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    //Rearranging array
    //We use the logic that if there is a negative element after a positive element they should switch. Run the loop enough times and the array is sorted
    //Also pass is used as counter. as counter reaches full the loop terminates
    while(1)
    {
        int pass;
        pass=0;
        for(int i = 0; i<n-1; i++)
        {
            if(a[i]>0 && a[i+1]<=0)
            {
                int temp;
                temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
            else
            {
                pass++;
            }
        }
        if(pass == n-1)
        {
            break;
        }
    }

    //Printing changed array
    printf("\nRearranged array ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
