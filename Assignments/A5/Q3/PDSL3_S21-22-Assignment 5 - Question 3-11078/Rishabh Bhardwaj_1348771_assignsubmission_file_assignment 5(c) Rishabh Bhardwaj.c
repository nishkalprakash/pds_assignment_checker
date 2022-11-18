/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/

#include<stdio.h>


// re declaration of function.
int saddle(int a[][100], int m, int n);

// the main function.
int main()
{
    int a[100][100], i, j, r, c, s;

    // dimension of matrix.
    printf("Enter the numbers of rows and columns respectively: ");
    scanf("%d %d", &r, &c);

    // input for the matrix.
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d] = ", i,j);
            scanf("%d",&a[i][j]);
        }
    }
    // print of the matrix.
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }printf("\n");
    }

    //execution of the function.
    s = saddle(a, r, c);

    // the final result.
    if (s == 0)
    {
        printf("There is on saddle point.\n");
    }
    else{
        printf("There have saddle points.\n");
    }

}

// declaration of the function.
int saddle(int a[][100], int m, int n)
{
    int p, q, l=0;

    for(p=0;p<m;p++)
    {
        for(q=0;q<n;q++)
        {
            //
            if ( (a[p][q]< a[p+1][q] && a[p][q]< a[p+2][q] && a[p][q]>a[p][q+1] && a[p][q]>a[p][q+2] )|| (a[p][q]> a[p+1][q] && a[p][q]> a[p+2][q] && a[p][q]<a[p][q+1] && a[p][q]<a[p][q+2] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p+1][q] && a[p][q]< a[p-1][q] && a[p][q]>a[p][q+1] && a[p][q]>a[p][q+2] )|| (a[p][q]> a[p+1][q] && a[p][q]> a[p-1][q] && a[p][q]<a[p][q+1] && a[p][q]<a[p][q+2] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p-2][q] && a[p][q]< a[p-1][q] && a[p][q]>a[p][q+1] && a[p][q]>a[p][q+2] )|| (a[p][q]> a[p-2][q] && a[p][q]> a[p-1][q] && a[p][q]<a[p][q+1] && a[p][q]<a[p][q+2] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p+1][q] && a[p][q]< a[p+2][q] && a[p][q]>a[p][q+1] && a[p][q]>a[p][q-1] )|| (a[p][q]> a[p+1][q] && a[p][q]> a[p+2][q] && a[p][q]<a[p][q+1] && a[p][q]<a[p][q-1] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p+1][q] && a[p][q]< a[p-1][q] && a[p][q]>a[p][q+1] && a[p][q]>a[p][q-1] )|| (a[p][q]> a[p+1][q] && a[p][q]> a[p-1][q] && a[p][q]<a[p][q+1] && a[p][q]<a[p][q-1] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p-2][q] && a[p][q]< a[p-1][q] && a[p][q]>a[p][q+1] && a[p][q]>a[p][q-1] )|| (a[p][q]> a[p-2][q] && a[p][q]> a[p-1][q] && a[p][q]<a[p][q+1] && a[p][q]<a[p][q-1] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p+1][q] && a[p][q]< a[p+2][q] && a[p][q]>a[p][q-2] && a[p][q]>a[p][q-1] )|| (a[p][q]> a[p+1][q] && a[p][q]> a[p+2][q] && a[p][q]<a[p][q-2] && a[p][q]<a[p][q-1] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p+1][q] && a[p][q]< a[p-1][q] && a[p][q]>a[p][q-2] && a[p][q]>a[p][q-1] )|| (a[p][q]> a[p+1][q] && a[p][q]> a[p-1][q] && a[p][q]<a[p][q-2] && a[p][q]<a[p][q-1] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }
            //
            if ( (a[p][q]< a[p-2][q] && a[p][q]< a[p-1][q] && a[p][q]>a[p][q-2] && a[p][q]>a[p][q-1] )|| (a[p][q]> a[p-2][q] && a[p][q]> a[p-1][q] && a[p][q]<a[p][q-2] && a[p][q]<a[p][q-1] ) )
            {
                printf("a[%d][%d] = %d is a saddle point\n", p, q, a[p][q]);
                l++;
            }

        }
    }

    return(l);// returning the value
}

