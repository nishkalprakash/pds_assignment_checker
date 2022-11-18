#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,**k,m,n,i,j,t;
    printf("Enter rows and cols respectively");
    scanf("%d%d",&m,&n);
    //alloting dynamic memory
    a= (int **) malloc(m * sizeof(int *));
    for (i=0; i<m; i++) a[i] = (int *)malloc(n * sizeof(int));
    printf("Enter elements");
    //scanning elements
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            scanf ("%d", &a[i][j]);
    }
    printf("enter size of kernal ");
    scanf("%d",&t);
    //dynamic memory allocation
    k= (int **) malloc(t* sizeof(int *));
    for (i=0; i<t; i++) k[i] = (int *)malloc(t * sizeof(int));
    //scanning elements
    for (i=0; i<t; i++)
    {
        for (j=0; j<t; j++)
            scanf ("%d", &k[i][j]);
    }
    //calling function
    filter(a,k,m,n,t);
}

void filter( int **a, int **k, int m, int n, int t)
{
    int p[25][25],i,j,c,d,sum=0;
    //creating new array
    for(c=0; c<=(m-t); c++)
    {
        for(d=0; d<=(n-t); d++)
        {
            for(i=0; i<t; i++)
            {
                for(j=0; j<t; j++)
                {
                    sum+= k[i][j]*a[i+c][j+d];
                }
            }
            p[c][d]=sum;
            sum=0;
        }
    }
    //printing new array
     for(c=0; c<=(m-t); c++)
    {
        for(d=0; d<=(n-t); d++){
            printf("%d",p[c][d]);
        }
        printf("\n");
    }

}
