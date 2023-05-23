#include <stdio.h>
#include <stdlib.h>




int main(){
    int m,n,z,c;
    //char Y[][],Z[][];
    scanf("%d",&n);
    char *X[n],ch;
    for (int i=0; i<n; ++i) {
        X[i] = (char *) malloc (10*sizeof(char));
        do
        {
            ch = getchar();
            X[i][c] = ch;
            c++;
            if (c > 10) {
            X[i] = (char *) realloc(X[i], 20 * sizeof(char));
            }
        }while (ch != ‘\n’);
            c = c – 1;
            X[i][c] = ‘\0’;
            //A[i][] = x;
        //for (j=0; j<col; ++j)
        //r[i][j] = i + j;
        }
    printf("\n## After reading X ##\n");
    printf("Printing %d names (names stored in X):\n",n);
    printf("#       Name");
    printf("===========================");
    for (int i=0; i<n; ++i) {
            for (int j=0; X[i][j] != '\0'; ++i) {
            printf("%d      %s",i+1,X[i][j]);}


return 0;
}
