/*
22ME10034
Hindvee Rajesh Vispute
Section 2
Lab-07
Assignment 3
*/

#include<stdio.h>

int main()
{

    int n, m;
    int i, j;

    scanf("%d", &n);


    char *X[n];
    char *Y[m];


    for(i=0; i<n; i++)
    {
        X[i]=(char *)calloc(100, sizeof(char));
    }



    scanf("%d", &m);
    for(i=0; i<m; i++)
    {
        Y[i]=(char *)calloc(100, sizeof(char));
    }

    for(i=0; i<n; i++)
    {
        for(j=0; X[i][j] != '\n'; j++)
        {
            scanf("%c", &X[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; Y[i][j] != '\n'; j++)
        {
            scanf("%c", &Y[i][j]);
        }
    }


    for(i=0; i<n; i++)
    {
        for(j=0; X[i][j] != '\n'; j++)
        {
            printf("%c", X[i][j]);
        }
        printf("\n");
    }

}
