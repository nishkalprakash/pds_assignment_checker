#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int main()
{
    char *a[3], f;
    printf (”Enter nos. of columns of the 2-d array a:”);
    scanf(”%d”, &f);
    for (int i=0;i<3;i++)
    {
        a[i] = (char*) malloc(f * sizeof(char));
    }

    char *b[3], g;
    printf (”Enter nos. of columns of the 2-d array b:”);
    scanf(”%d”, &g);
    for (int i=0;i<3;i++)
    {
        b[i] = (char*) malloc(g * sizeof(char));
    }

    char *c[3], h;
    printf (”Enter nos. of columns of the 2-d array c:”);
    scanf(”%d”, &h);
    for (int i=0;i<3;i++)
    {
        c[i] = (char*) malloc(h * sizeof(char));
    }

    return 0;
}
