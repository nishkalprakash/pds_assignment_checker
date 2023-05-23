#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d",&n);

    char **X = (char **)malloc(n*sizeof(char *));
    for(int i=0;i<n;++i){
        X[i]= (char *)malloc(100*sizeof(char));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3 ;j++){

            scanf("%s",&X[i][j]);

        }
    }
    scanf("%d",&m);

    char **Y = (char **)malloc(m*sizeof(char *));
    for(int i=0;i<m;++i){
        Y[i]= (char *)malloc(50*sizeof(char));
    }
    char ch;
    for(int i=0;i<m;i++){
        for(int j=0;j<3 ;j++){
                char d[100];
            for(int k = 0; ;k++){
                ch = getchar();
                if(ch == '\n'){
                    break;
                }
                d[k] = ch;
            }
        X[i][j] = d;



        }
    }
    char **Z = (char **)malloc((n+m)*sizeof(char *));
    for(int i=0;i<(n+m);++i){
        X[i]= (char *)malloc(100*sizeof(char));
    }
    for(int i=0;i<n;++i){
        Z[i]= X[i];
    }
    for(int i=n;i<(m+n-1);++i){
        Z[i]= Y[i];
    }
    for(int i=0;i<(n+m);i++){
        for(int j=0;j<3;j++){


        }
    }










return 0;
}
