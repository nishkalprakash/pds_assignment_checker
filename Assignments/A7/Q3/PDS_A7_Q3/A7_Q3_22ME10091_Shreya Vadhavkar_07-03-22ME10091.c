#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d", &n);
    char c;
    scanf("%c",&c);
    char **X;
    X = (char **)malloc(n*sizeof (char));
    int i;
    for(i=0;i<n;++i)
    {
        X[i]= (char *)malloc(100*sizeof (char));
    }
    for(i=0;i<n;++i)
    {
        scanf("%[^'\n']", X[i]);
        scanf("%c", &c);
    }
    scanf("%d", &m);
    scanf("%c", &c);
    char **Y;
    Y = (char **)malloc(m*sizeof (char));
    for(i=0;i<m;++i)
    {
        Y[i]=(char *)malloc(100*sizeof (char));
    }
    for(i=0;i<m;++i)
    {
        scanf("%[^'\n']", Y[i]);
        scanf("%c", &c);
    }
    printf("## After reading X ##\n");
    printf("Printing 3 names (names stored in X):\n");
    printf("#       Name\n");
    printf("===========================\n");
    for(i=0;i<n;++i)
    {
        printf("%d       %s\n",i+1,X[i]);
    }
    printf("\n\n");
    printf("## After reading Y ##\n");
    printf("#       Name\n");
    printf("===========================\n");
    for(i=0;i<m;++i)
    {
        printf("%d       %s\n",i+1,Y[i]);
    }
    char **Z;
    Z= (char **)malloc((m+n)*sizeof (char *));
    for(i=0;i<(m+n);++i)
    {
        Z[i]=(char *)malloc((m+n)*sizeof (char));
    }
    for(i=0;i<n;++i)
    {
        Z[i]=X[i];
    }
    for(i=0;i<m;++i)
    {
        Z[i+n]=Y[i];
    }
    int j;
    int s=0;
    char *temp;
    temp = (char *)malloc(100 * sizeof (char));
    for(i=0;i<(m+n);++i)
    {
        for(j=i+1;j<(m+n);++j)
        {
            int r= (int)strcmp(Z[i],Z[j]);
            if(r>0)
            {
                temp = Z[i];
                Z[i]= Z[j];
                Z[j]=temp;
            }
            if(r==0)
            {
                Z[j]="\0";
                ++s;
            }
        }
    }
    printf("## After sorting and deleting duplicates in Z ##\n");
    printf("Printing %d names (names stored in Z):\n",m+n-s);
    printf("#       Name\n");
    printf("===========================\n");
    for(i=0;i<m+n;++i)
    {
        printf("%d       %s\n",i+1,Z[i]);
    }
    return 0;
}
