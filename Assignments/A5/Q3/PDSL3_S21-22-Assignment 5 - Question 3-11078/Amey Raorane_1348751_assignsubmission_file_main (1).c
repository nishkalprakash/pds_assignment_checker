#include<stdio.h>
#include<stdlib.h>

void isSaddle(int m,int n,int **arr)
{
    printf("Saddle point(s): ");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //Case 1, row max and col min
            int maxr=arr[i][0];
            for(int k=0;k<n;k++)
            {
                if(arr[i][k]>maxr)
                {
                    maxr=arr[i][k];
                }
            }
            if(maxr==arr[i][j])
            {
                int minC=arr[0][j];
                for(int k=0;k<m;k++)
                {
                    if(arr[k][j]<minC)
                    {
                        minC=arr[k][j];
                    }
                }
                if(minC==arr[i][j])
                {
                    printf("a[%d][%d] = %d, ",i,j,arr[i][j]);
                }
            }

            //Case 2, row min and col max
            int maxC=arr[0][j];
            for(int k=0;k<m;k++)
            {
                if(arr[k][j]>maxC)
                {
                    maxC=arr[k][j];
                }
            }
            if(maxC==arr[i][j])
            {
                int minR=arr[i][0];
                for(int k=0;k<n;k++)
                {
                    if(arr[i][k]<minR)
                    {
                        minR=arr[i][k];
                    }
                }
                if(minR==arr[i][j])
                {
                    printf("a[%d][%d] = %d, ",i,j,arr[i][j]);
                }
            }
        }
    }
}

int main()
{
    int m,n;

    printf("#rows: ");
    scanf("%d",&m);

    printf("#columns: ");
    scanf("%d",&n);

    int **arr;

    arr=(int ** )malloc(m * sizeof(int *));
    for(int i=0;i<m;i++)
    {
        arr[i]=(int * )malloc(n * sizeof(int));
    }

    printf("\nInitialize the array :-\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEntered Matrix:-\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    isSaddle(m,n,arr);

    return 0;
}