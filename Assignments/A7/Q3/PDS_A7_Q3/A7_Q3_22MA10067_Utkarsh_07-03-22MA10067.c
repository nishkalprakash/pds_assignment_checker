#include <stdio.h>
#include <stdlib.h>





int main(){
    int m,n,z,c = 0;
    scanf("%d",&n);
    char *X[3],ch;
    for (int i=0; i<3; ++i) {
        X[i] = (char *) malloc (10*sizeof(char));
        c = 0;
        do
        {
            ch = getchar();
            X[i][c] = ch;
            //printf("%c ",X[i][c]);
            c++;
            if (c > 10) {
            X[i] = (char *) realloc(X[i], 20 * sizeof(char));
            }
        }while (ch != '\n');
            X[i][c-1] = '\0';
            //printf("%s ",X[i]);
        }


    printf("\n## After reading X ##\n");
    printf("Printing %d names (names stored in X):\n",3);
    printf("#       Name\n");
    printf("===========================\n");


    for (int i=0; i<3; ++i) {
                printf("%d     %s ",i+1,X[i]);
            printf("\n");}


return 0;
}
