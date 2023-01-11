# include<stdio.h>
int main () {
     int m,n;
     printf("Enter number of rows and columns : ");
     scanf("%d %d", &m, &n);
     int mat[m][n];
     printf("Enter the elements : ");

     for(int i=0;i<m;i++) 
    {
     for(int j=0;j<n;j++) 
    {
    scanf("%d", &mat[i][j]);
    }
    }
    int y=0;
     for(int i=0;i<m;i++) 
    {
     for(int j=0;j<n;j++) 
    {
     int x=0; 
     for(int k=0;k<n;k++)
    {
      if(mat[i][j] <= mat[i][k]) 
    {
      x++;
    }
    }
     for(int l=0;l<m;l++)
    {
      if(mat[i][j] >= mat[l][j]) 
    {
      x++;
    }
    } if(x == m+n) 
    {
     printf("%d is a saddle point\n", mat[i][j]);
      y = y+x;
    }
    }
    } if(y==0)
    {
     printf("There is no saddle point\n");
    } return 0;
    }
    


