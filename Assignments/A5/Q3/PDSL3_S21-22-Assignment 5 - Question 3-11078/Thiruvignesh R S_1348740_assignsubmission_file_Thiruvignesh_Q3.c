/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m,s=0;
    int **p;
    int row[100],col[100];

    printf("no of rows: ");
    scanf("%d",&n);
    printf("no of columns: ");
    scanf("%d",&m);

    p=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        p[i]=(int*)malloc(m*sizeof(int));
    }

    for (int i=0;i<n;i++){
        printf("\nenter row%d: ",i+1);
        for (int j=0;j<m;j++){
            scanf("%d",&p[i][j]);
        }
    }

    for (int i=0;i<n;i++){
        int min=p[i][0];
        int r,c;
        for (int j=1;j<m;j++){
            if (min>p[i][j]){
                min=p[i][j];
                r,c=i,j;
            }
        }
        int maxc=p[0][c];
        for (int j=1;j<n;j++){
            if (maxc<p[j][c]){
                maxc=p[j][c];
            }
        }
        if (maxc==min){
            row[s]=r;
            col[s]=c;
            s++;
        }
    }
    for (int i=0;i<n;i++){
        int max=p[i][0];
        int r,c;
        for (int j=1;j<m;j++){
            if (max>p[i][j]){
                max=p[i][j];
                r,c=i,j;
            }
        }
        int minc=p[0][c];
        for (int j=1;j<n;j++){
            if (minc<p[j][c]){
                minc=p[j][c];
            }
        }
        if (minc==max){
            row[s]=r;
            col[s]=c;
            s++;
        }
    }

    if (s!=0){
        printf("number of saddle points: %d\n",&s);
        printf("saddle points: ");
        for (int i=0;i<s;i++){
            printf("p[%d][%d]",row[i],col[i]);
        }
    }
    else printf("no saddle points exist");

    return 0;
}