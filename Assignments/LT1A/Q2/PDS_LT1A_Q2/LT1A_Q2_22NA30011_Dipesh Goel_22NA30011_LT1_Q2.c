#include <stdio.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Lab Test Q2
Description : Pattern print
*/


int main()                                      // Calling the main function
{
    int n;                                      // Declaring variables

    printf("Enter the number of rows : ");      // Input number of rows of pattern
    scanf("%d",&n);

    if (n>=2 && n<=10)
    {

    int count=1;

    for (int i=1;i<=n;i++)                      // Creates n new rows
    {
        for(int j=1;j<=i;j++)                   // Writes pattern for each row 
        {
            printf("%d ",count);
            count++;                            // Updating count
        }
        printf("\n");                           // Goes to new row
    }

	}

	else printf("Invalid Input");	

    return 0;
}

