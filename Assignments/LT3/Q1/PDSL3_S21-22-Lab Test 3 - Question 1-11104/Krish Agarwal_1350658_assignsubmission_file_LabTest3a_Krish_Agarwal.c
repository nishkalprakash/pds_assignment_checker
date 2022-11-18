/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    printf("Enter the image size: ");
    scanf("%d%d",&m,&n);
    int **matrix;
    matrix = (int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
        matrix[i]= (int*)malloc(n*sizeof(int));
    printf("Enter the image:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int label[100],num_connect=0; //no. of connections
    label[0]=-1;
    int x,y;
    //labeling the matrix with 1,2,3,...  whenever a connection is found 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==1)
            {
                x=i;
                y=j;
                matrix[i][j]=label[0];
                num_connect++;
                break;
            }
        }
        if(num_connect!=0)
        break;
    }
    //searching in different neighbours for the connections
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==1)
            {
                int flag=0;
                if(i==x && j==y)
                    continue;
                if( (i-1)>=0 && (j-1)>=0 )
                {
                    for(int k=0;k<num_connect;k++)
                    {
                        if(matrix[i-1][j-1]==label[k])
                        {
                            flag=1;
                            matrix[i][j]=label[k];
                        }
                    }
                }
                if( (i-1)>=0 && (j+1)<n )
                {
                    for(int k=0;k<num_connect;k++)
                    {
                        if(matrix[i-1][j+1]==label[k])
                        {
                            flag=1;
                            matrix[i][j]=label[k];
                        }
                    }
                }
                if( (i-1)>=0 )
                {
                    for(int k=0;k<num_connect;k++)
                    {
                        if(matrix[i-1][j]==label[k])
                        {
                            flag=1;
                            matrix[i][j]=label[k];
                        }
                    }
                }
                if( (j-1)>=0 )
                {
                    for(int k=0;k<num_connect;k++)
                    {
                        if(matrix[i][j-1]==label[k])
                        {
                            flag=1;
                            matrix[i][j]=label[k];
                        }
                    }
                }
                if( (i+1)<m && (j-1)>=0 )
                {
                    for(int k=0;k<num_connect;k++)
                    {
                        if(matrix[i+1][j-1]==label[k])
                        {
                            flag=1;
                            matrix[i][j]=label[k];
                        }
                    }
                }
                if( (j+1)<n )
                {
                for(int k=0;k<num_connect;k++)
                     if(matrix[i][j+1]==label[k])
                     {
                        flag=1;
                        matrix[i][j]=label[k];
                     }
                }
                if((i+1)<m)
                {
                    for(int k=0;k<num_connect;k++)
                    {
                        if(matrix[i+1][j]==label[k])
                        {
                            flag=1;
                            matrix[i][j]=label[k];
                        }
                    }
                }
                if( (i+1)<m && (j+1)<n )
                {
                    for(int k=0;k<num_connect;k++)
                    {
                        if(matrix[i+1][j+1]==label[k])
                        {
                            flag=1;
                            matrix[i][j]=label[k];
                        }
                    }
                }
                if(flag==0)
                {
                    label[num_connect]=num_connect+1;
                    matrix[i][j]=label[num_connect];
                    num_connect++;
                }
            }
        }
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(matrix[i][j]==-1)
                matrix[i][j]=1;

    //displaying image matrix with labels
    printf("\nOutput image with labelled connected components:\n\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
    printf("\nNumber of connected components = %d\n",num_connect);
    return 0;
}