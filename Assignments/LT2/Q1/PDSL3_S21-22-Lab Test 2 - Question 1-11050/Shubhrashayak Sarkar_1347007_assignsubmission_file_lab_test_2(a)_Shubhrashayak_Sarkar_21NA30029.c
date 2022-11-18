/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>

int TotalSum(int a[], int n)//This function gives the total sum of all the elements of the array
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        sum += temp;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the total number of integers in the list\n");
    scanf("%d", &n); // Read the number of elements in the list
    int List[n];
    printf("Enter the List of numbers\n");
    for (int i = 0; i < n; i++) // Reads the list
    {
        scanf("%d", &List[i]);
    }
    int Temp_array[n];
    int Sub_array[n];
    for (int i = 0; i < n; i++) // This loop resets the value of the Temp_array so it does not contain garbage value.
    {
        Temp_array[i] = 0;
    }
    int largestSum = 0;
    int m;
    for (int i = 1; i <= n; i++)
    {
        int index = 0; // This variable is used to shift the index of the contiguous memory location
        for (int j = 0; j < i && index < n; j++)
        {
            Temp_array[j] = List[index];
            int temp = TotalSum(Temp_array, i);
            if (temp > largestSum)
            {
                largestSum = temp;
                m = i; // This variable holds the number of elements in sub array.
                for (int k = 0; k < i; k++)
                {
                    Sub_array[k] = Temp_array[k];
                }
            }
            index++;
        }
    }
    printf("Largest Sum: %d\n", largestSum);
    printf("The corresponding sub array is\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", Sub_array[i]);
    }
    return 0;
}