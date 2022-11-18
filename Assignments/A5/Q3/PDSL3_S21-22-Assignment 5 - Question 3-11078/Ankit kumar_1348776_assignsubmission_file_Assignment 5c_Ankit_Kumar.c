/*Name: Ankit Kumar
Roll no.21MI10010
Department:Mining*/
#include<stdio.h>
#define ROWS 3
#define COLUMNS 3
int main()
{

int s,j,t,m,n,min,max,a[2][2];
printf("order of square matrix is 3\n");
int matrix[3][3];
printf("input matrix\n");
for (s=0;s<m;s++)
{
    for (j=0;j<m;j++)
    {
        scanf("%d",&matrix[s][j]);
    }
}
printf("matrix is \n");
for(s=0;s<m;s++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d",matrix[s][j]);
        }
        printf("\n");
    }
    for (s=0;s<m;s++)
    {
        min=matrix[s][0];
        for(j=0;j<m;j++)
        {
            if (min>=matrix[s][j])
            {
                min=matrix[s][j];
                a[0][0]=s;
                a[0][1]=j;
            }
        }
        j=a[0][1];
        max=matrix[0][j];
        for(t=0;t<m;t++)
        {
            if(max<=matrix[t][j])
            {
                max=matrix[s][j];
                a[1][0]=t;
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