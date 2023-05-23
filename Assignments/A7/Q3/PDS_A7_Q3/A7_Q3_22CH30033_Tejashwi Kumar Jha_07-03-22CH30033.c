#include<stdio.h>
#include<string.h>

int main()
{
    int n,p;

    printf("Enter number of names in first array :\n");
    scanf("%d",&n);
    p = n+1;

    char *X;
    X = (char*)malloc(p*sizeof(char));

    for (int i = 0 ; i < p ; i++)
    {
        scanf("%s",&X[i]);
    }


    int m,q;

    printf("Enter number of names in second array :\n");
    scanf("%d",&m);
    q = m+1;

    char *Y;
    Y = (char*)malloc(q*sizeof(char));

    for (int j = 0 ; j < q ; j++)
    {
        scanf("%s",&Y[j]);
    }

    printf("Printing %d names in X :\n",n);
    for (int i = 0 ; i < n ; i++)
    {
        printf("%s\n",X[i]);
    }

    printf("\nPrinting %d names in Y :\n",m);
    for (int j = 0 ; j < m ; j++)
    {
        printf("%s\n",Y[j]);
    }
}
