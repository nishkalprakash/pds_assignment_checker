/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <stdlib.h>

void neighbours(int i, int j, int m, int n,int **img, int **visited, int **new, int g)
{
    //checking all the eight neighbours and recursively calling the function
    if(i-1>0)
    {
        if(j-1>0)
        {
            if(img[i-1][j-1] == 1 && visited[i-1][j-1]==0)
            {
                new[i-1][j-1] = g;
                visited[i-1][j-1] = 1;
                neighbours(i-1, j-1, m, n, img, visited, new, g);
            }
        }
        if(img[i-1][j] == 1 && visited[i-1][j]==0)
            {
                new[i-1][j] = g;
                visited[i-1][j] = 1;
                neighbours(i-1, j, m, n, img, visited, new, g);
            }
        if(j+1<n)
        {
            if(img[i-1][j+1] == 1 && visited[i-1][j+1]==0)
            {
                new[i-1][j+1] = g;
                visited[i-1][j+1] = 1;
                neighbours(i-1, j+1, m, n, img, visited, new, g);
            }
        }
    }
    if(i+1<m)
    {
         if(j-1>0)
        {
            if(img[i+1][j-1] == 1 && visited[i+1][j-1]==0)
            {
                new[i+1][j-1] = g;
                visited[i+1][j-1] = 1;
                neighbours(i+1, j-1, m, n, img, visited, new, g);
            }
        }
        if(img[i+1][j] == 1 && visited[i+1][j]==0)
            {
                new[i+1][j] = g;
                visited[i+1][j] = 1;
                neighbours(i+1, j, m, n, img, visited, new, g);
            }
        if(j+1<n)
        {
            if(img[i+1][j+1] == 1 && visited[i+1][j+1]==0)
            {
                new[i+1][j+1] = g;
                visited[i+1][j+1] = 1;
                neighbours(i+1, j+1, m, n, img, visited, new, g);
            }
        }
    }
    if(j-1>0)
    {
        if(img[i][j-1] == 1 && visited[i][j-1]==0)
            {
                new[i][j-1] = g;
                visited[i][j-1] = 1;
                neighbours(i, j-1, m, n, img, visited, new, g);
            }
    }
    if(j+1<n)
    {
        if(img[i][j+1] == 1 && visited[i][j+1]==0)
            {
                new[i][j+1] = g;
                visited[i][j+1] = 1;
                neighbours(i, j+1, m, n, img, visited, new, g);
            }
    }
}

int main()
{
    int m,n;
    printf("Enter the image size: ");
    scanf("%d %d", &m, &n);
    int **img = (int**)malloc(m*sizeof(int*));
    
    printf("Enter the image: \n");
    for (int r = 0; r < m; r++)
    {
        img[r] = (int *)malloc(n* sizeof(int));
    }
    for(int i=0; i<m; i++)
    {
        
        
        for(int j=0; j<n; j++)
        {
            scanf("%d ", &img[i][j]);
            
        }
        
    }
    int **new = (int **)malloc(m*sizeof(int*));//2d array to store the final image
    int **visited = (int **)malloc(m*sizeof(int*));//2d array to see if we have already visited the number

    for(int i=0; i<m; i++)
    {
        new[i] = (int *)malloc(n*sizeof(int));
        visited[i] = (int *)malloc(n*sizeof(int));
        
        for(int j=0; j<n; j++)
        {
            visited[i][j]=0;
            new[i][j]=img[i][j];
            
        }
    }
    
    int g=1;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(img[i][j]==1 && visited[i][j]==0)
            {
                visited[i][j]==1;
                new[i][j]=g;
                neighbours(i, j, m, n, img, visited, new, g);
                g+=1;
            }
        
        }
    }

    printf("Output image: \n");
    for(int i=0; i<m; i++)
    {
        
        for(int j=0; j<n; j++)
        {
            printf("%d", new[i][j]);
        }
        printf("\n");
    }
    printf("Number of connected components: %d", --g);
    

}