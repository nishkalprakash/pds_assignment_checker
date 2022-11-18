//C program to find saddle point in a matrix

#include<stdio.h>

int main()
{
    int nrow,ncol;
    int min,max,pos[2][2];
    printf("Enter the no.of rows and columns respectively :");
    scanf("%d%d",&nrow,&ncol); //User enters the no.of rows and columns respectively
    int a[nrow][ncol];
    int i,j,k;

    printf("Enter the elements : ");
    for(i=0;i<nrow;i++)
        for(j=0;j<ncol;j++)
            scanf("%d",&a[i][j]); //User enters the elements of the matrix

    printf("\nThe matrix is : \n");
    for(i=0;i<nrow;i++)
        {for(j=0;j<ncol;j++)
            printf("%d",a[i][j]);
            printf("\n"); // Elements of matrix are printed- each row in one line
        }

    //Finding the saddle point
    for(i=0;i<nrow;i++)
    {
        min=a[i][0];
        for(j=0;j<ncol;j++)
        {
            if(min >= a[i][j])
            {
                min=a[i][j];
                pos[0][0]=i;
                pos[0][1]=j;
            }
        }
        j=pos[0][1];
        max=a[0][j];
        for(k=0;k<nrow;k++)
        {
            if(max<=a[k][j])
            {
                max=a[i][j];
                pos[1][0]=k;
                pos[1][1]=j;
            }
        }
        if(min==max)
        {
            if(pos[0][0]==pos[1][0] && pos[0][1]==pos[1][1])
            {
                printf("In the above array, a[%d][%d] = %d is a saddle point\n",pos[0][0],pos[0][1],max);
            }
        }

    }
    return(0);

}
