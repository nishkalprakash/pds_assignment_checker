/*Jaydeep parmar
22AG30016
PROBLEM 2*/

#include<stdio.h>
int main()
{
    int k,l;
    int n,m;
    printf("enter number of rows of matrix A: ");
    scanf("%d",&m);
    printf("enter number of columns of matrix A: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter values: ");
    for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {
            scanf("%d",&arr[k][l]);
        }
    }


    int k1,l1;
    int Y,U;
    printf("enter number of rows of matrix B: ");
    scanf("%d",&U);
    printf("enter number of columns of matrix B: ");
    scanf("%d",&Y);
     int Karr[U][Y];
    printf("enter values: ");
    for(k1=0;k1<Y;k1++)
    {
        for(l1=0;l1<Y;l1++)
        {
            scanf("%d",&Karr[k1][l1]);
        }
    }
    printf("matrices before multiplication: \n");
    for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {

            printf("%d",arr[k][l]);
        }
        printf("\n");
        printf("\n");
    }
    for(k1=0;k1<U;k1++)
    {
        for(l1=0;l1<Y;l1++)
        {

            printf("%d",Karr[k1][l1]);
        }
        printf("\n");
    }
        if(n!=U)
    {
        printf("matrix multiplication not possible");
    }
    return 0;

}

