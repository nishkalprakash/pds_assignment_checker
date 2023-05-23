/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 3
*Description-
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char **a,**b;
    int m,n,i;

    printf("enter number of names you want to enter in Array X : ");
    scanf("%d",&m);

    a=(char **)calloc(m,sizeof(char *));
    for (i=0;i<m;i++)
    {
        a[i]=(char *)calloc(100,sizeof(char));
    }


    for (i=0;i<m;i++)
    {
        gets(*a+i);
    }

    printf("enter number of names you want to enter in Array Y : ");
    scanf("%d",&n);

    b=(char **)calloc(n,sizeof(char *));
    for (i=0;i<n;i++)
    {
        b[i]=(char *)calloc(100,sizeof(char));
    }


    for (i=0;i<n;i++)
    {
        gets(*b+i);
    }

    printf("after reading x : \n");
    printf("reading %d names \n",m);
    printf("#            name \n");
    printf("===========================\n");
    for (i=0;i<m;i++)
    {
        printf("%s\n",*b+i);
    }

    printf("after reading Y : \n");
    printf("reading %d names \n",n);
    printf("#            name \n");
    printf("===========================\n");
    for (i=0;i<n;i++)
    {
        printf("%s\n",*b+i);
    }


    free(a);
    free(b);

    return 0;
}
