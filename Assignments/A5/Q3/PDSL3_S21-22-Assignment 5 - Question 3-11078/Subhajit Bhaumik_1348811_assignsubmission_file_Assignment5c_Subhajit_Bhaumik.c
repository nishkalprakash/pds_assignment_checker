#include <stdio.h>

void saddlepoint(int n, int a[10][10]);

main()
{
//Declaring a 2D integer array and defining its size by user input
    int ar[10][10], number, p;

    printf("Enter size of matrix:");
    scanf("%d", &number);

//Filling the array by integer values from the user
    printf("Enter 2D array elements:");
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    //Printing the 2D array
    printf("Elements of the 2D array is:");
    for (int i = 0; i < number; i++)
    {
        printf("\n");
        for (int j = 0; j < number; j++)
        {
            printf("%d ", ar[i][j]);
        }
    }
    //Function Calling
    saddlepoint(number, ar);

}
//Function to find the saddle points and print on the terminal
void saddlepoint(int n, int a[10][10])
{
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        int s = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if (s > a[i][j])
            {
                s = a[i][j];
                p = j;
            }
        }

        int large = 0;
        for (int j = 0; j < n; j++)
        {
            if (large < a[j][p])
            {
                large = a[j][p];
            }
        }
        if (s == large)
        {
            printf("\nValue of saddle point:%d", s);
            f = 0;
        }
    }

    if (f > 0)
        printf("\nNo saddle point");
}
