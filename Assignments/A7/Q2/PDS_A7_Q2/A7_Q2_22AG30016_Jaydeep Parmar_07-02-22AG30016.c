#include<stdio.h>
int main()
{
    int k,l;
    int n,m;
    printf("enter dimension of matrix A: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("enter values: ");
    for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {
            scanf("%d",&arr[k][l]);
        }
    }
    printf("answer: \n");
    for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {

            printf("%d",arr[k][l]);
        }
        printf("\n");
    }

    int k1,l1;
    int Y,U;
    printf("enter dimension of matrix B: ");
    scanf("%d %d",&U,&Y);
     int Karr[U][Y];
    printf("enter values: ");
    for(k1=0;k1<Y;k1++)
    {
        for(l1=0;l1<Y;l1++)
        {
            scanf("%d",&Karr[k1][l1]);
        }
    }
    printf("answer: \n");
    for(k1=0;k1<U;k1++)
    {
        for(l1=0;l1<Y;l1++)
        {

            printf("%d",Karr[k1][l1]);
        }
        printf("\n");
    }
    return 0;
}
