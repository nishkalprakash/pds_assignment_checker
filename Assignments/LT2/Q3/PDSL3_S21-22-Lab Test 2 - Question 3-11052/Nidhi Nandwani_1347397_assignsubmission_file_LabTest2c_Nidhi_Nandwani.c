/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
int minTotalIqDiff(int m, int Iq[], int n)
{
    int curr_sum =0;
    for(int i=0; i<n; i++)
    {
        curr_sum =Iq[i];
        for(int j=i+1; j<n; j++)
        {
            
        }
    }
}

int main()
{
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the IQ of students: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;
    printf("ENter the no. of teams: ");
    scanf("%d", &m);
    minTotalIqDiff(m, a, n);
}