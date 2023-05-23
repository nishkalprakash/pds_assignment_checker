#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,m,i,j,c=0;
    char line[100], ch;
    int **x,**y;

    printf("Enter number of names for Array X: ");
    scanf("%d", n);

    x=(char**) malloc(n*sizeof(char*));
    for (int i = 0; i < n; i++)
        x[i] = (char *) malloc(sizeof(char));


    for(i=0; i<n; i++)
    {
        do
        {
            ch = getchar();
            line[c] = ch;
            c++;
        }
        while (ch != '\n');

        x[i]= (char*) realloc(x[i], c*sizeof(char));
        for(j=0;j<c;j++)
        x[j][i]=line[j];
        c=0;
    }


    printf("Enter number of names for Array Y: ");
    scanf("%d", m);

    y=(char**) malloc(m*sizeof(char*));
    for (int i = 0; i < m; i++)
        y[i] = (char *) malloc(sizeof(char));


    for(i=0; i<m; i++)
    {
        do
        {
            ch = getchar();
            line[c] = ch;
            c++;
        }
        while (ch != '\n');

        y[i]= (char*) realloc(y[i], c*sizeof(char));
        for(j=0;j<c;j++)
        y[j][i]=line[j];
        c=0;
    }


    printf("names in X array are:\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<(sizeof(y[i]));j++)
        {
            printf("%c", x[j][i]);
        }
    }

}

