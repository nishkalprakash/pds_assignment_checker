/*
section 14
name:ANUSHREE GHOSH
roll no:22CH30005
LAB TEST 2
description:printing a matrix
*/


typedef struct
{
    int n;
    int **m;
} Matrix;

//creating the function initmat

void initMat(Matrix *mat, int N)
{
    mat->n = N;
    mat->m = (int **)malloc(mat->n * sizeof(int *));
    for (int i = 0; i < mat->n; i++)
        mat->m[i] = (int *)malloc(mat->n * sizeof(int));
}

//defining the function printMat

void printMat(Matrix *mat, char *s)
{
    printf("\nThe Matrix %s is: \n\t", s, mat->n);
    for (int i = 0; i < mat->n; i++, printf("\n\t"))
        for (int j = 0; j < mat->n; j++)
            printf("%d ", mat->m[i][j]);
}

void getMat(Matrix *mat, int N, char *s)
{
    initMat(mat, N);
    printf("\nEnter %d numbers for %s: ", mat->n * mat->m, s);
    for (int i = 0; i < mat->n; i++)
        for (int j = 0; j < mat->m; j++)
            scanf("%d", &mat->m[i][j]);
    printMat(mat, s);
}

void zeroMat(Matrix *mat, int N)
{
    initMat(mat, N);
    for (int i = 0; i < mat->n; i++)
        for (int j = 0; j < mat->m; j++)
            mat->m[i][j] = 0;
}



/*
    Function to free the memory allocated for a 2d matrix
*/
void freeMemory(Matrix *mat)
{
    int sz = mat->n;
    for (int i = 0; i < sz; i++)
    {
        free(mat->m[i]);
    }
    free(mat->m);
}

int main()
{
    int N,M;
    Matrix M1;

    printf("Enter N: ");//taking the value of n
    scanf("%d", &N);
    
    printf("Enter M: ");//taking the value of m
    scanf("%d", &M);

    getMat(&M1, N, "M1");//calling the function getMat
    
    zeroMat(&M1, N);//calling the function zeromat
    
   

    // we should free the memory to avoid memory leak
    // An important programming practice :)
    freeMemory(&M1);
    

    return 0;
}


