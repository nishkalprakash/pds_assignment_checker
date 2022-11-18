// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 3

#include<stdio.h>

//BACKTRACKING
void covertneibour(int matrix[][100],int itr,int i1,int j1,int last1,int last2,int m,int n)
{
    //BASE CASE
    int flag=1;
    for (int i = -1; i <=1; i++)
    {
       for (int j = -1; j<=1; j++)
       {
           if(last1!=i||last2!=j)
           {
               if(i+i1>=0&&j+j1>=0&&i+i1<m&&j+j1<n&&matrix[i+i1][j+j1]!=0)
               flag=0;
           }
       }
       
    }
    if(flag==1)
     return ;
    

    for (int i = -1; i <=1; i++)
    {
        for (int j = -1; j <=1; j++)
        {
            if((last1!=i||last2!=j)&&i+i1>=0&&j+j1>=0&&i+i1<m&&j+j1<n&&matrix[i+i1][j+j1]==1)
            {
                matrix[i+i1][j+j1]=itr;
                covertneibour( matrix, itr, i1+i, j1+j, -i, -j,m,n);


            }
        }
        
    }
    

     
    

}






void special(int matrix[][100],int m,int n,int itr)
{
    int i;
    for ( i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==1)
            {
                matrix[i][j]=itr;
                covertneibour(matrix,itr,i,j,0,0,m,n);
                special(matrix,m,n,itr+1);
            }
        }
        
    } 

}



int main()
{
    int matrix[100][100];
    int m,n;
    printf("\nENTER THE VALUE m&n");
    scanf("%d%d",&m,&n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }

    special(matrix,m,n,2);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]!=0)
            matrix[i][j]--;
        }
        
        
    }
    
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
        
    }

    
}