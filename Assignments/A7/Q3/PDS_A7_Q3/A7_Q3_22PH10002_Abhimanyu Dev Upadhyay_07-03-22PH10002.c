/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 3
* Description : Name Game
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char **x, **y, **z;
    int X,Y,i;
    printf("x = ");
    scanf("%d", &X);

    x = (char**)malloc(X*sizeof(char*));
    for(i = 0; i <= X; i++)
    {
        char c, *s;
        int n=0, alc = 20;
        s = (char*)malloc(20*sizeof(char));
        while(1)
        {
            scanf("%c", &c);
            if(c == 10) break;
            n++;
            if(n>20)
            {
                alc =+ 20;
                s = (char*)realloc(s,alc*sizeof(char));
            }
            s[n-1] = c;
        }
        x[i] = (char*)malloc(strlen(s)*sizeof(char));
        int j;
        for(j = 0; j<strlen(s); j++)
        {
            x[i][j]=s[j];
        }
    }

    printf("\nArray in X");
    for(i = 0; i<=X; i++)
    {
        puts(x[i]);
    }

    printf("\ny = ");
    scanf("%d", &Y);

    y = (char**)malloc(Y*sizeof(char*));
    for(i = 0; i <= Y; i++)
    {
        char c, *s;
        int n=0, alc = 20;
        s = (char*)malloc(20*sizeof(char));
        while(1)
        {
            scanf("%c", &c);
            if(c == 10) break;
            n++;
            if(n>20)
            {
                alc =+ 20;
                s = (char*)realloc(s,alc*sizeof(char));
            }
            s[n-1] = c;
        }
        y[i] = (char*)malloc(strlen(s)*sizeof(char));
        int j;
        for(j = 0; j<strlen(s); j++)
        {
            y[i][j]=s[j];
        }
    }
    printf("\nArray in Y");
    for(i = 0; i<=Y; i++)
    {
        puts(y[i]);
    }


    z = (char**)malloc((X+Y)*sizeof(char*));
    for(i = 0; i <= X; i++)
    {
        z[i] = (char*)malloc(strlen(x[i])*sizeof(char));
        for(int j =0; j<= strlen(x[i]); j++)
        {
            z[i][j] = x[i][j];
        }
    }
    for(i = X+1; i <= X+Y+1; i++)
    {
        z[i] = (char*)malloc(strlen(y[i])*sizeof(char));
        for(int j =0; j<= strlen(y[i]); j++)
        {
            z[i][j] = y[i][j];
        }
    }
    int Z = X + Y;

    for(i = 0; i<=Z; i++)
    {
        for(int j = 0; j<=Z; j++)
        {
            int r = strcmp(z[i],z[j]);
            if(r < 0);
            else if(r > 0)
            {
                for(int k = 0; k<= strlen(z[i])||k<=strlen(z[j]); k++)
                {
                    char t = z[i][k];
                    z[i][k]= z[j][k];
                    z[j][k]=t;
                }
            }
            else{
                    free(z[j]);
                    z--;
            }
        }
    }


    for(i = 0; i<X; i++) free(x[i]);
    free(x);
    for(i = 0; i<Y; i++) free(y[i]);
    free(y);
    for(i = 0; i<X+Y; i++) free(z[i]);
    free(z);
    return 0;
}
