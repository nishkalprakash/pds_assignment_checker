// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>

int minTotalIqDiff(int m, int n[])
{
    for (int i = 0; i < m; i++)
    {
        // Loop
    }
    
}

// Main function - The program starts from here
int main()
{
    int m,t, min;

    // Taking inputs
    printf("Enter total number of students : ");
    scanf("%d",&t);

    int n[t];
    printf("Enter IQ of students : ");
    for (int i = 0; i < t; i++)
        scanf("%d",&n[i]);

    printf("Enter total number of teams : ");
    scanf("%d",&m);

    // Calling function
    min = minTotalIqDiff(m,n);
    
    return 0;
}