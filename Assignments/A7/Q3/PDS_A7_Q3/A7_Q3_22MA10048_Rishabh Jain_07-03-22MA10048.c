#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    char **X;
    char a;
    scanf("%d",&n);
    scanf("%c",&a);


    X=(char**)malloc(n*sizeof(char*));
    for (int i = 0; i < n; i++)
     {
         X[i] = (char *) calloc(100, sizeof(char));
     }
    for(int i=0;i<n;i++)
    {
        char ch;
        int c = 0;
        do
        {
            ch = getchar();
            X[i][c] = ch;
            c++;
        }
        while (ch != '\n');

        c-= 1;
        X[i][c] = '\0';
    }


    for(int i=0;i<n;i++)
    {
        printf("%d   %s\n",(i+1),X[i]);
    }




    char **Y;
    char b;
    scanf("%d",&m);
    scanf("%c",&b);

    Y=(char**)malloc(m*sizeof(char*));
    for (int i = 0; i < m; i++)
     {
         Y[i] = (char *) calloc(100, sizeof(char));
     }
    for(int i=0;i<m;i++)
    {
        char ch;
        int c = 0;
        do
        {
            ch = getchar();
            Y[i][c] = ch;
            c++;
        }
        while (ch != '\n');

        c-=1;
        Y[i][c] = '\0';
    }


    for(int i=0;i<m;i++)
    {
        printf("%d   %s\n",(i+1),Y[i]);
    }







}
