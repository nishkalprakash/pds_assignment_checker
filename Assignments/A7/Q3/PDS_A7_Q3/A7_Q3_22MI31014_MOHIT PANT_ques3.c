#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int x;
    scanf("%d",&x);
    char **a;
    a = (char **)malloc(x * sizeof(char *));
    for (char i=0; i<3; i++){
        a[i] = (int *)malloc(3 * sizeof(char));
    }
    char **c;
    c = (char **)malloc(x * sizeof(char *));
    for (char i=0; i<3; i++){
        c[i] = (int *)malloc((3+i) * sizeof(char));
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<3;j++){

            gets(a[i][j]);
        }
    }
    printf("## After reading X ##\nPrinting 3 names (names stored in x)\n     # names");
    for(int i=0;i<x;i++){
        for (int j=0;j<3;j++){
            printf("%c",a[i][j]);
        }
    }

    int y;
    scanf("%d",&y);
    char **b;
    b = (int **)malloc(y * sizeof(char *));
    for (int i=0; i<3; i++){
        a[i] = (int *)malloc(3 * sizeof(char));
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<3;j++){

            gets(b[i][j]);
        }
    }
    printf("## After reading Y ##\nPrinting 3 names (names stored in y)\n     # names");
    for(int i=0;i<y;i++){
        for (int j=0;j<3;j++){
            printf("%c",b[i][j]);
        }
    }
    int n=0;
    for(int i=0;i<x;i++){
            if(strcmp(a[i][0],b[i][0]) && strcmp(a[i][1],b[i][1]) && strcmp(a[i][1],b[i][1])){
                    n++;

            }
            else{
                    c[i][0]=a[i][0];
                    c[i][1]=a[i][1];
                    c[i][2]=a[i][2];


            }


    }
    printf("Printing %d names (names stored in z)\n     # names",x+y-n);
    for(int i=0;i<x+y-n;i++){
        for (int j=0;j<3;j++){
            printf("%c",c[i][j]);
        }
    }

return 0;
}
