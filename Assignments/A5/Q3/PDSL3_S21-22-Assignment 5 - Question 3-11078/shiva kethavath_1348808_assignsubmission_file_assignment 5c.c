/*
NAME;KETHAVATH SHIVA
DEPARTMENT;MINING ENGENEERING
ROLL NO;21MI10029
operating system;windows
*/
#include<stdio.h>
#define ROWS 3
#define COLUMNS 3
int main()
{

int i,j,k,m,n,min,max,a[2][2];
printf("the order of square matrix is 3\n");
int matrix[3][3];
printf("input the matrix\n");
for (i=0;i<m;i++)
{
    for (j=0;j<m;j++)
    {
        scanf("%d",&matrix[i][j]);
    }
}
printf("the matrix is \n");
for(i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<m;i++)
    {
        min=matrix[i][0];
        for(j=0;j<m;j++)
        {
            if (min>=matrix[i][j])
            {
                min=matrix[i][j];
                a[0][0]=i;
                a[0][1]=j;
            }
        }
        j=a[0][1];
        max=matrix[0][j];
        for(k=0;k<m;k++)
        {
            if(max<=matrix[k][j])
            {
                max=matrix[i][j];
                a[1][0]=k;
                a[1][1]=j;
            }
        }
        if(min==max)
        {
            if(a[0][0]==a[1][0]&&a[0][1]==a[1][1])
            {
                printf("saddle point (%d,%d) : %d\n",a[0][0],a[0][1],max);
            }
        }
    }
    return(0);
}
