int saddle(int A[][MAX], int R,int C)
{
    int i, j;        
    for (i = 0; i < R; i++)
    {
       
        int min_row = A[i][0], min_row_corr_col = 0;
        for (j = 1; j < C; j++)
            if (min_row > A[i][j])
            {
                min_row = A[i][j];
                min_row_corr_col = j;
            }
 
       
        for (j = 0; j < C; j++)
            // Note that min_row_corr_col is fixed
            if (min_row < A[j][min_row_corr_col])
                break;
 
        
        if (j == R)
            return printf("Saddle Point: %d",min_row);
    }
    
    printf("Saddle Point: NOT FOUND");
}


int main()
{
    int A[MAX][MAX]; 
    int R, C;        
    int i, j;        

    printf("Enter R C: ");
    scanf("%d%d", &R, &C);

    printf("Enter Elements: ");
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            scanf("%d", &A[i][j]);

    saddle(A,R,C);

    return 0;
}
