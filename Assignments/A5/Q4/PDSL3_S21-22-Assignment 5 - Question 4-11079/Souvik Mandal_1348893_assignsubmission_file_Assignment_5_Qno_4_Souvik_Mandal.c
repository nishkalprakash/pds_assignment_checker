/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/


#include<stdio.h>
void main()
{
    int i,j,m,n,A[100][100],B[100][100],sum[100],r,c,k,x=0;
    printf("Enter dimension of matrix : ");
    scanf("%d%d",&m,&n);

    for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
                {
                    scanf("%d",&A[i][j]);
                }
        }
    printf("Enter k for odd order k*k matrix (k should be less than m and n both): ");
    scanf("%d",&k);

    for (i=0;i<k;i++)
        {
            for (j=0;j<k;j++)
                {
                    scanf("%d",&B[i][j]);
                }
        }
    for (i=0;i<100;i++)
        {
            sum[i]=0;
        }

    for (i=0;i<=m-k;i++)
        {
            for (j=0;j<=n-k;j++)
                {
                    for (r=i;r<k+i;r++)
                        {
                            for (c=j;c<j+k;j++)
                                {
                                    sum[x]=sum[x]+((A[r][c])*(B[r][c]));

                                }
                        }
                    x++;
                }
        }



    for (i=0;i<x;i++)
        {
          printf("   %d",sum[i]);
        }

}