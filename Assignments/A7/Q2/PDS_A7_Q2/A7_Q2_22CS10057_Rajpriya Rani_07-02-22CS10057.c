#include <stdio.h>
#include <stdlib.h>
void main()
{
    int **p1;
    int **p2;
    int **p3;
    int m,n,p,i,j,row,col,t,k;
    printf("enter values of m,n,p: ");
    scanf("%d%d%d",&m,&n,&p);

    p1 = (int **) calloc(m, sizeof(int*));      //dynamic memory allocation
    for (int i = 0; i < m; i++)
        p1[i] = (int *) calloc(n, sizeof(int));

    p2 = (int **) calloc(n, sizeof(int*));      //dynamic memory allocation
    for (int i = 0; i < n; i++)
        p2[i] = (int *) calloc(p, sizeof(int));

    p3 = (int **) calloc(m, sizeof(int*));      //dynamic memory allocation
    for (int i = 0; i < m; i++)
        p3[i] = (int *) calloc(p, sizeof(int));

    printf("Enter %d elements: ",(m*n));
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&p1[i][j]);
    }
    printf("Enter %d elements: ",(p*n));
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
            scanf("%d",&p2[i][j]);
    }
    printf("\n Array A entered: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d  ",p1[i][j]);
        printf("\n");
    }
    printf("\n Array B entered: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
            printf("%d  ",p2[i][j]);
        printf("\n");
    }
    row=(m<n)?m:n;
    col=(n<p)?n:p;

    for(i=0;i<row;i++)      //swapping
    {
        for(j=0;j<col;j++)
        {
            t=p1[i][j];
            p1[i][j]=p2[i][j];
            p2[i][j]=t;
        }
    }
    printf("\n Array A final: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d  ",p1[i][j]);
        printf("\n");
    }
    printf("\n Array B final: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
            printf("%d  ",p2[i][j]);
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(k=0;k<p;k++){
        for(j=0;j<n;j++)
        {
            p3[i][k]+=p1[i][j]*p2[j][k];        //product
        }}
    }
    printf("\n Array C : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d  ",p3[i][j]);
        }
        printf("\n");
    }

}
