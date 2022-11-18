/*
RAKESH TARENDRA
21MT30031
*/
#include <stdio.h>

int main()
{
    int length, startIndex = 0, endIndex = 0;

    printf("Size of the array [1,20]: ");
    scanf("%d", &length);

    // array of length entered
    int Arr[length];
    printf("Enter the array elements\n");

    // populating the array
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &Arr[i]);
    }


    int largest = Arr[0];// intialise variable

    for (int i = 0; i < length; i++)
    {
        int sum = 0;
        for (int j = i; j < length; j++)
        {
            sum = sum + Arr[j];
            if (sum > largest)
            {
                startIndex = i;
                endIndex = j;
                largest = sum;
            }
        }
    }

    printf("\nThe largest contigous subarray is: ");
    for (int z = startIndex; z <= endIndex; z++)
    {
        printf(" %d ", Arr[z]);
    }
    printf("\n The sum of the largest contigous subarray is");
    printf(" %d", largest);
    return 0;
}
