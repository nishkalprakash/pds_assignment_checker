/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <stdlib.h>
#define max 100

int filter(int a[][max], int k[][max], int ks, int m, int n)
{
    int *final[max];
    int index = 0, ind=0; //indexes for the final matrix
    int cal=0;
    int p,q;
    for(int z=0; z<(m-ks+1); z++)//filtering till we are above ks size from the last row of matrix
    {
        final[index] = (int*)malloc(max*sizeof(int));
        ind=0;
        for(int i=0; i<(n-ks+1); i++)
        {
            for(int j=i; j<i+3; j++)
            {
                p=0;
                for(int l=z; l<z+3; l++)
                {
                    q=0;
                    //multiplying the kernel element to array elment
                    cal+=(a[j][l])*(k[p][q++]);
                }
                p++;
            }
            
            final[index][ind++] = cal;
        }
        index++;
    }
    printf("Output image matrix: \n");
    for(int i=0; i<index; i++)
    {
        for(int j=0; j<ind; j++)
            printf("%d ", final[i][j]);//printing the output matrix
        printf("/n");
    }
}
int main()
{
    int m,n;
    printf("Enter the dimension of input image matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i=0; i<m;i++)
    {
        printf("Enter the values in row %d :", i+1);
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);
        printf("\n");
    }
    printf("Enter the kernel size: ");
    int ks;
    scanf("%d", &ks);
    int k[ks][ks];
    for(int i=0; i<ks; i++)
    {
        printf("Enter the values in row %d :",i+1);
        for(int j=0; j<ks; j++)
            scanf("%d", &k[i][j]);
        printf("\n");
    }
    filter(a,k,ks,m,n);
}