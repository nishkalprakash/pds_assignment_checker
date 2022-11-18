/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#define max 100

int findSaddle(int a[][max], int m, int n)
{
    printf("Saddle points: \n");
    int count=0;//using count to find the no. of saddle points found
    for(int i=0; i<m; i++)
    {
        //finding minimum and maximum element of row and storing the column indexes
        int minr = a[i][0],maxr=a[i][0],min_index=0, max_index=0;
        for(int j=0; j<n; j++)
        {
            if(a[i][j]>maxr)
            {
                maxr = a[i][j];
                max_index = j;
            }
            if(a[i][j]<minr)
            {
                minr = a[i][j];
                min_index = j;
            }
                
        }
        //checking if minimum of row is also maximum in its column
        int k;
        for(k=0; k<m; k++)
        {
            if(minr < a[k][min_index])
                break;
        }
        if(k==m)
        {
            printf("a[%d][%d] = %d is a saddle point\n", i, min_index,minr);
            count++;
        }
        //checking if maximum of row is also minimum in its column
        int l;
        for(l=0;l<m;l++)
        {
            if(maxr>a[l][max_index])
                break;
        }
        if(l==m)
        {
            printf("a[%d][%d] = %d is a saddle point\n", i, max_index,maxr);
            count++;
        }

    }
    return count;
}

int main()
{
    int rows, cols;
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];
    printf("Enter the elements: ");
    for(int i=0;i<rows; i++)
    {
        for(int j=0; j<cols; j++)
            scanf("%d", &a[i][j]);
    }
    int sdpts;
    sdpts = findSaddle(a, rows, cols);
    if(sdpts==0)
        printf("Found none");

}