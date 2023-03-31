/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 04
Description - Code for Numero-Pyramid
*/
#include<stdio.h>
int main()
{
    int n,k,l;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=2*n-1; j++)
        {
            k = j;
            l = j;
            if(j<n-(i-1) || j>n+(i-1)) //condition so that spaces are printed at appropriate places
            {
                printf(" ");
            }
            for(int q=j; q>=n-(i-1) && q<=n; q++) //to print increasing number of digits
            {
                printf("%d", k);
                k++;
            }
            for(int w=j; w>n && w<=n+(i-1); w++) //to print decreasing number of digits
            {
                printf("%d",l);
                l--;
            }
        }
        printf("\n");
    }
    return 0;
}

