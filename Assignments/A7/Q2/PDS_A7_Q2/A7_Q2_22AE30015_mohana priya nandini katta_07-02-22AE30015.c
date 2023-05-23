#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

    int m,n,p,A[100][100],B[100][100],i,P,Q,**ptr,C[100][100];

    ptr = (int**) calloc(m,sizeof(int*));

    for(int i=0; i<m; i++);

    ptr[i]= (int*) calloc(n,sizeof(int));

    printf("Enter dimensions:");

    scanf("%d %d ", &m, &n);

    for ( P=0 ; P<m ; P++ )

    for ( Q=0 ; Q<n ; Q++ )

    scanf("%d", &A[P][Q]);

    for ( P=0 ; P<n ; P++ )

    for ( Q=0 ; Q<p ; Q++ )

    scanf("%d", &B[P][Q]);

    for ( P=0 ; P<m ; P++ )

    for ( Q=0 ; Q<p ; Q++ )

    C[P][Q] = A[P][Q] * B[P][Q] ;/*C is the product of matrices A and B*/

    for ( P=0 ; P<m ; P++)

{

    for ( Q=0 ; Q<m ; Q++)

        printf("%d" , C[P][Q]);

     printf ("\n");

}

return 0;


}
