#include<stdio.h>
#include<time.h>
#include<stdlib.h>





void merge (int *a, int *b, int *c, int m, int n)
{

    int i=0, j=0, k=0, p;

    while ((i < m) && (j < n))
    {

        if (a[i] < b[j])

        {
            c[k] = a[i];
            i++;
        }

        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }


    if (i == m)
    {

        for (p=j; p<n; p++)

        {
            c[k] = b[p];
            k++;
        }
    }
    else
    {

        for (p=i; p<m; p++)

        {
            c[k] = a[p];
            k++;
        }
    }
}




int max( int *A, int n )
{

    int i, j, k, m;

    int *B, *C ;

    if (n > 1)
    {

        k = n/2;
        m = n - k;

        B = (int *) malloc (k * sizeof(int));

        C = (int *) malloc (m * sizeof(int));


        for (i=0; i<k; i++)
        {

            B[i] = A[i];
        }


        for (j=k; j<n; j++)
        {
            C[j-k] = A[j];
        }
        // B contains first half of A
        // C contains second half of A


        max (B, k);
        max (C, m);
        merge (B, C, A, k, m);

        free(B);
        free(C) ;

        return A[n-1] ;



    }
}


    int main(){


        int n, p, q, *num, i;

        printf("enter the value of n:\n") ;
        scanf("%d", &n ) ;

        printf("enter the range :\n" ) ;

        scanf("%d%d", &p, &q ) ;

        time_t t;



        num = (int *) malloc( n* sizeof( int ) );

        srand(time(t)) ;

        for ( i = 0; i< n; i++)
        {

            num[i] = p + rand()%q ;

        }

        printf("list: \n") ;

        for ( i = 0; i < n; i++){

            printf("%d   ", num[i]) ;
        }

        printf("\n") ;


        printf("%d", max(num, n)) ;




        return 0;

    }





