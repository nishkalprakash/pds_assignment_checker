/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>


int main() 
{
    int **a,**ker,i,j,k,l,t,s,n,c,r,sum=0;

    printf("\nEnter the Diminsion of matrix : "); // Taking the value of dimension of matrix
    scanf("%d%d",&r,&c);

    a = (int**)malloc(r * sizeof(int*));
    for(i=0;i<r;i++)
    a[i]=(int*)malloc(c*sizeof(int*));

    printf("\nEnter the image matrix : \n"); // Taking input of the image matrix
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("\nEnter the size of kernel matrix : "); // Taking input from the user about kernel matrix size
    scanf("%d",&n);

    if(r<n||c<n)
    {
        printf("\nSize of Kernel matrix is greater than image matrix , transfomation not possible.\n"); // Printing 'transformation not possible' if condition doesn't meet
        return 0;
    }         

    ker=(int**)malloc(n* sizeof(int*));
    for(i=0;i<n;i++)
    ker[i]=(int*)malloc(n*sizeof(int*));

    printf("\nEnter the Kernel matrix : \n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&ker[i][j]);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if((r-i)>=n&&(c-j)>=n)
            {   
                 s=0; sum=0;
                for(k=i;k<r&&s<n;k++)
                {   t=0; 
                    for(l=j;l<c&&t<n;l++)
                    {
                        sum+=a[k][l]*ker[s][t];
                        t++;
                    }
                    s++; 
                }
                a[i][j]=sum;
            }
        }
    }       

    printf("\nOutput matrix is : \n"); // Printing the output matrix
    for(i=0;i<=(r-n);i++)
    {
        for(j=0;j<=(c-n);j++)
        {
            printf("%d  ",a[i][j]);
        }    
        printf("\n");
    }

    for(i=0;i<n;i++)
    free(ker[i]);

    return 0;
}
