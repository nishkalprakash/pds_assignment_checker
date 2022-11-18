/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Lab Test: 3
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int g[300][300] = {0};
int w[300][300] = {0};

int dx[8] = {-1,0,1,1,1,0,-1,-1};
int dy[8] = {1,1,1,0,-1,-1,-1,0};

void dfs(int x,int y,int c){
    w[x][y] = c;
    for(int i=0; i<8;i++){
        int nx = x+dx[i], ny = y+dy[i];
        if(g[nx][ny] && !w[nx][ny]) dfs(nx,ny,c);
    }
}

int main(){
    int row, col, set = 1;
    printf("Enter no of rows and columns:"); //inputting no of rows and columns
    scanf("%d%d", &row, &col);
    printf("\nEnter the elements:\n");

    for(int i=1; i<=row; i++) for(int j=1; j<=col; j++) scanf("%d", &g[i][j]); //forming the matrix

    for(int i=1; i<=row;i++)
        for(int j=1; j<=col; j++)
            if(g[i][j] && !w[i][j])
                dfs(i,j,set++);

    printf("Graph:\n");
    for(int i=1; i<=row;i++){
        for(int j=1; j<=col;j++)
            printf("%d ", g[i][j]);
        puts("");
    }
    puts("");
    printf("Output:\n");
    for(int i=1; i<=row;i++){
        for(int j=1; j<=col;j++)
            printf("%d ", w[i][j]);
        puts("");
    }

    return 0;
}