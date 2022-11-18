/*************************
*Section:3
*Roll No:21MA10017
*Name:Bimal Gayali
*Assignment No:5(3)

*******/
#include<stdio.h>
int main()
{
    int a[10][10],f=0,n,c,k,i,j,max,min;
    printf("Enter Number of Row and column ");
    scanf("%d",&n);
    for(i=0;j<n;j++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Number in Pocket [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
            printf("Matrix is \n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%4d",a[i][j]);
                }
                printf("\n");
            }
            for(i=0;i<n;i++)
            {
                min=a[i][0];
                c=0;
                for(j=0;j<n;j++)
                {
                    if(a[i][j]<min)
                    {
                        min=a[i][j];
                        c=j;
                    }
                }
                max=0;
                for(k=0;k<n;k++)
                {
                    if(a[k][c]>max)
                    {
                        max=a[k][c];
                    }
                }


            if(min==max)
            {
                printf("saddle point of Matrix is %d",max);
                f=1;
            }
        }
       if(f==0)
       {
            printf("Matrix has NO saddle point");
       }
    }

