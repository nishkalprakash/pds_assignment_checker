/* Name- Vedant Katole
section - 2
roll np - 22EC10087
Lab - 7
problem no - 3 */

#include<stdio.h>

void main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    char **X;

    X = (char **) calloc(n, sizeof(char*));
    for(int i = 0; i < n; i++)
        X[i] = (char *) calloc(100, sizeof(char));

    int j = 0;
    //taking the names in X
    scanf("\n");
    for(int i = 0; i < n; i++){
        do{
            scanf("%c", &X[i][j]);
            j++;
        }while(X[i][j-1] != '\n');
        X[i][j-1] = '\0';
        j = 0;
    }

    int m;
    printf("\nEnter the number of names in Y:");
    scanf("%d", &m);

    int **Y;
    Y = (char **) calloc(m, sizeof(char*));
    for(int i = 0; i < m; i++)
        Y[i] = (char *) calloc(100, sizeof(char));

    j = 0;
    //Taking the names in Y
    scanf("\n");
    for(int i = 0; i < m; i++){
        do{
            scanf("%c", &Y[i][j]);
            j++;
        }while(Y[i][j-1] != '\n');
        Y[i][j-1] = '\0';
        j = 0;
    }

    //Printing X
    j = 0;
    printf("Printing %d names in X\n", n);
    for(int i = 0; i < n; i++){
        printf("%d.\t", i+1);
        do{
            printf("%c", X[i][j]);
            j++;
        }while(X[i][j-1] != '\0');
        printf("\n");
        j = 0;
    }

    printf("\n\n");
    //Printing Y
    j = 0;
    printf("Printing %d names in Y\n", m);
    for(int i = 0; i < m; i++){
        printf("%d.\t", i+1);
        do{
            printf("%c", Y[i][j]);
            j++;
        }while(Y[i][j-1] != '\0');
        printf("\n");
        j = 0;
    }

    char **Z;
    int p = m + n;

    Z = (char **) calloc(p, sizeof(char*));
    for(int i = 0; i < p; i++)
        Z[i] = (char *) calloc(100, sizeof(char));

    //Copying the values of X and Y in Z
    j = 0;
    for(int i = 0; i < n; i++){
        do{
            Z[i][j] = X[i][j];
            j++;
        }while(Z[i][j-1] != '\0');
        j = 0;
    }
    for(int i = n; i < p; i++){
        do{
            Z[i][j] = Y[i-n][j];
            j++;
        }while(Z[i][j-1] != '\0');
        j = 0;
    }

    j = 0;
    printf("Printing %d names in z\n", p);
    for(int i = 0; i < p; i++){
        printf("%d.\t", i+1);
        do{
            printf("%c", Z[i][j]);
            j++;
        }while(Z[i][j-1] != '\0');
        printf("\n");
        j = 0;
    }
}
