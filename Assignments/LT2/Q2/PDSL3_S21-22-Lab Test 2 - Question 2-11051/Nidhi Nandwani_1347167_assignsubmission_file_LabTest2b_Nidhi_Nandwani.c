/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include<stdio.h>

int maxAlphaValue(int s[], int n) //taking the array and its length as input from user
{
    int alphamax=0;
    int ctr;
    for(int i=0; i<n; i++)
    { 
        ctr=0;
        for(int j=0; j<i; j++)
        {
            if(s[j] %s[i] == 0)
            ctr++; // counting the alpha value for array term at ith index
        }
        if(ctr>alphamax)
        alphamax=ctr;//checking for the maximum count
    }
    return alphamax;
}

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n); //taking the length of the array as input from user
    int s[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++)
    scanf("%d", &s[i]);

    int alpha = maxAlphaValue(s, n);
    printf("The maximum alpha value is: %d", alpha);
}