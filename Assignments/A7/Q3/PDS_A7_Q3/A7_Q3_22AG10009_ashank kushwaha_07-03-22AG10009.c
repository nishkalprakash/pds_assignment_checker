
/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO:5
DESCRIPTION:random perfect
*/
#include <stdio.h>
#include <string.h>
int main(){
    int i,j,m,n;
    char **x,**y,**z,k[100];
    scanf("%d",&m);

    x=(char **)calloc(m, sizeof(char));
    for (i = 0; i < m; i++)
    x[i] = (char *) calloc(100, sizeof(char));

    for (i=0; i<m; i++){
        gets(x[i]);
        scanf("%s",k);
    }
    scanf("%s",k);
    scanf("\n%d",&n);
    scanf("%s",k);
    y=(char **)calloc(n, sizeof(char));
    for (i = 0; i < n; i++)
    y[i] = (char *) calloc(100, sizeof(char));
    for (i=0; i<n; i++){
        gets(y[i]);
    }
    z=(char **)calloc(m+n, sizeof(char));
    for (i = 0; i < m+n; i++)
    z[i] = (char *) calloc(100, sizeof(char));

    for (i=0; i<m; i++){
        strcpy(z[i],x[i]);
    }
    for (i=0; i<n; i++){
        strcpy(z[i+m],y[i]);
    }
    for (i=0; i<m; i++){
        printf ("%s", x[i]);
        printf("\n");
    }
    printf("\n");
    for (i=0; i<n; i++){
        printf ("%s", y[i]);
        printf("\n");
    }
     printf("\n");
    for (i=0; i<m+n; i++){
        printf ("%s",z[i]);
        printf("\n");
        }
    printf("\n");

    free(x);
    free(y);
    free(z);
}

