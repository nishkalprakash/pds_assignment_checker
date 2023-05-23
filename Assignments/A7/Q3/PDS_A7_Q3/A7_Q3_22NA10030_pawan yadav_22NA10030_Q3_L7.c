#include<stdio.h>
#include<stdlib.h>
int main(){
    char **A,**B;
     A= (char **) calloc(n1, sizeof(char*));
     for (char i = 0; i < n1; i++){
     A[i] = (char *) calloc(n2, sizeof(char));}


     for(int i=0;i<n;i++){
        for(int j=0;j!='\0';j++){
           gets(A[i][j]);
        }
     }

  B= (char **) calloc(n1, sizeof(char*));
     for (char i = 0; i < n1; i++){
     B[i] = (char *) calloc(n2, sizeof(char));}

    for(int i=0;i<n;i++){
        for(int j=0;j!='\0';j++){
           gets(B[i][j]);
        }
     }
     return 0;
}
