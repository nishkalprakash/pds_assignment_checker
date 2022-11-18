/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/


#include <stdio.h>

int main()
{
//taking the inputs
int a[10][10],i,j,k,m,n,row_min,ci;

printf ("Enter the number of rows and columns of the matrix");
scanf ("%d %d", &m,&n);

printf("Enter the elements in the matrix:\n");

for(i=0;i<m;i++)
{
    for (j=0;j<n;++j)
        scanf ("%d",&a[i][j]);
}
    for(i = 0; i < n; i++)
    {
        //find the minimum element of row with its column index
        row_min=a[i][0],ci=0;
        for(j = 1; j < n; j++)
        {
            if (row_min >a[i][j])
            {
                row_min =a[i][j];
                ci= j;
            }
        }
        //checking the minimum element is the maximum element o
        for (k = 0; k < n; k++)
        {
            // Note that col_ind is fixed
            if (row_min<a[k][ci])
            break;
        }
        // If saddle point is present
        if (k == n)
        {
            printf("\nThe Saddle Point is: %d" ,row_min);
            return;
        }
    }
    // If the Saddle Point not found
    printf("\nIn the above array saddle point is not present");
    return 0;
}