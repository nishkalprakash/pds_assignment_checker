/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 2
* Description : Matrix thing
*/

#include <stdio.h>
#include <stdlib.h>
//Function to print matrix
void printmat(int **a, int m , int n)
{
    int i,j;
    for(j = 0; j < m; j++)
    {
        printf("\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", *(*(a+i)+j));
        }
    }
}
int main()
{
    //Basic variables
    int m,n,p,i,j;

    scanf("%d %d %d", &m,&n,&p);

    //Defining matrices
    int **a,**b,**c;

    a = (int**)calloc(m,sizeof(int*));
    for(i = 0; i < m; i++)
        a[i] = (int*)calloc(n,sizeof(int));

    b = (int**)calloc(n,sizeof(int*));
    for(i = 0; i < n; i++)
        b[i] = (int*)calloc(p,sizeof(int));

    c = (int**)calloc(m,sizeof(int*));
    for(i = 0; i < m; i++)
        c[i] = (int*)calloc(p,sizeof(int));

    //Scanning matrices
    for(j = 0; j < m; j++)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(j = 0; j < n; j++)
    {
        for(i = 0; i < p; i++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n");
    printmat(a,m,n);
    printf("\n");
    printmat(b,n,p);
    //Matrix swap
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<m; j++)
        {
            if(i<p && j<m)
            {
                int t = a[i][j];
                a[i][j] = b[i][j];
                b[i][j] = t;
            }
        }
    }

    printmat(a,m,n);
    printf("\n");
    printmat(b,p,n);

    for(i = 0; i<m; i++)
    {
        for(j = 0; j<p; j++)
        {
            c[i][j] = 0;
        }
    }

    for(j = 0; j<m; j++)
    {
        for(i = 0; i<p; i++)
        {
            for(int k =0,l=0; k<m||l<p; k++,l++)
            {
                c[j][i] = c[j][i] + a[k][i]*b[j][l];
            }
        }
    }

    printf("\n");
    printmat(c,m,p);

    for(i = 0; i<m; i++) free(a[i]);
    free(a);
    for(i = 0; i<n; i++) free(b[i]);
    free(b);
    for(i = 0; i<m; i++) free(c[i]);
    free(c);

    return 0;

}
