/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
int n, I; // The integer n is used so that the user can provide the length of his array.
void print(int a[], int I)
{
    for (int i = 0; i < I; i++)
    {
        printf("%d", a[i]);
    }
}
void combinationsMaker(int a[], int I, int n)
{
    int data[I];
    for (int i = 0; i < n; i++)
    {
        data[i] = a[i];
        print(data, I);
        printf("\n");
    }
}

int main()
{
    int index = 0;
    printf("Enter the number of elements in your array\n");
    scanf("%d", &n);
    printf("Enter the array\n");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the length of your combination\n");
    scanf("%d", &I);
    combinationsMaker(a, I, n);
    return 0;
}