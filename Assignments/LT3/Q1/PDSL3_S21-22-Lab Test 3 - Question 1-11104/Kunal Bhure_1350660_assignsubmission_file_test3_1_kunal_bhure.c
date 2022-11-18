#include<stdio.h>
#include<stdlib.h>
void read_data (int **p, int m, int n)
{
    int i, j;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d", &p[i][j]);
        }
    }
}

int main()
{
    int m,n,i,j,**p;
    printf("Enter the image size");
    //scanning number of rows and column
    scanf("%d%d",&m,&n);
    //dynamically alloting memory to matrix
    p=(int**)malloc(m*sizeof(int*));
    for(i=0; i<m; i++)
    {
        p[i]=(int*)malloc(n*sizeof(int));
    }
    //function to read matrix elements
    read_data(p,m,n);

    //printing new matrix
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if(p[i][j]==0)
            {
                printf("%d",p[i][j]);
            }
            else
            {
                if(0<i<m-1&&0<j<n-1)
                {
                    if(p[i-1][j-1]==1||p[i-1][j]==1||p[i-1][j+1]==1||p[i][j-1]==1||p[i][j+1]==1||p[i+1][j-1]==1||p[i+1][j]==1||p[i+1][j+1]==1)
                    {
                        printf("%d\n",p[i][j]);
                    }

                }
            }
        }
    }
}
//function to read matrix element
