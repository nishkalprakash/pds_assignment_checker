/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 07
Description - Names
*/
#include<stdio.h>
int getName(char name[])
{
    char ch;
    int c = 0;
    do
    {
        ch = getchar();
        name[c] = ch;
        c++;
    }
    while(ch!='\n');
    name[c-1] = '\0';
    return c;
}

int main()
{
    //For array X
    int n1;
    char **x, sci[100];
    scanf("%d", &n1);
    x = (char **)malloc(n1*sizeof(char*));
    for(int i=0; i<n1+1; i++)
    {
        int len = getName(sci);
        x[i] = (char *)malloc(len*sizeof(char));
        for(int j=0; j<len; j++)
        {
            x[i][j] = sci[j];
            x[i][len] = '\0';
        }
    }
    for(int i=0; i<n1+1; i++)
    {
        for(int j=0; x[i][j]!='\0'; j++)
        {
            printf("%c", x[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //For array Y
    int n2;
    char **y, sci1[100];
    scanf("%d", &n2);
    y= (char **)malloc(n2*sizeof(char*));
    for(int i=0; i<n2+1; i++)
    {
        int len = getName(sci1);
        y[i] = (char *)malloc(len*sizeof(char));
        for(int j=0; j<len; j++)
        {
            y[i][j] = sci1[j];
            y[i][len] = '\0';
        }
    }
    for(int i=0; i<n2+1; i++)
    {
        for(int j=0; y[i][j]!='\0'; j++)
        {
            printf("%c", y[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //For array Z copying elements of array X and array Y
    char **z;
    z = (char **)malloc((n1+n2)*sizeof(char *));
    for(int i=0; i<(n1+n2);i++)
    {
        z[i] = (char *)malloc(100*sizeof(char));
    }

    for(int i=0; i<n1+1; i++)
    {
        for(int j=0; x[i][j]!='\0';j++)
        {
            z[i][j] = x[i][j];
        }
    }

    for(int i=n1+1; i<=(n1+n2); i++)
    {
        for(int j=0; y[i][j]!='\0';j++)
        {
            z[i][j] = y[i][j];
        }
    }

    for(int i=0; i<=(n1+n2); i++)
    {
        for(int j = 0; z[i][j]!='\0'; j++)
        {
            printf("%c", z[i][j]);
        }
        printf("\n");
    }
}
