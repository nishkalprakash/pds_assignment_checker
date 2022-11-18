#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ** allocate(int r,int c){
    int i,**p;
    p=(int **)malloc(r*sizeof(int *));
    for(i=0;i<c;i++){
        p[i]=(int *)malloc(c*sizeof(int));
    }
    return p;
}
void read_data(int **p,int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&p[i][j]);
        }
    }
}
void print_data(int **p,int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **p;
    int m,n;
    printf("Enter the image size: ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    p=allocate(m,n);
    printf("Enter the image:\n");
    read_data(p,m,n);
    // print_data(p,m,n);
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=p[i][j];
        }
    }
    long int cnt=0;
    if(p[0][0]==1){
        if(p[0][1]==1)cnt++;
        if(p[1][0]==1)cnt++;
        if(p[1][1]==1)cnt++;
        if(cnt!=0){
            a[0][0]=cnt;
        }
        cnt=0;
    }
    if(p[0][n-1]==1){
        if(p[0][n-2]==1)cnt++;
        if(p[1][n-2]==1)cnt++;
        if(p[1][n-1]==1)cnt++;
        if(cnt!=0){
            a[0][n-1]=cnt;
        }
        cnt=0;
    }
    if(p[m-1][0]==1){
        if(p[m-2][0]==1)cnt++;
        if(p[m-2][1]==1)cnt++;
        if(p[m-1][1]==1)cnt++;
        if(cnt!=0){
            a[m-1][0]=cnt;
        }
        cnt=0;
    }
    if(p[m-1][n-1]==1){
        if(p[m-2][n-2]==1)cnt++;
        if(p[m-2][n-1]==1)cnt++;
        if(p[m-1][n-2]==1)cnt++;
        if(cnt!=0){
            a[m-1][n-1]=cnt;
        }
        cnt=0;
    }
    for(int i=1;i<n-1;i++){
        if (p[0][i]==1){
            if(p[0][i-1]==1)cnt++;
            if(p[0][i+1]==1)cnt++;
            if(p[1][i-1]==1)cnt++;
            if(p[1][i]==1)cnt++;
            if(p[1][i+1]==1)cnt++;
            if(cnt!=0){
                a[0][i]=cnt;
            }
        }
        cnt=0;
    }
    for(int i=1;i<n-1;i++){
        if (p[m-1][i]==1){
            if(p[m-1][i-1]==1)cnt++;
            if(p[m-1][i+1]==1)cnt++;
            if(p[m-2][i-1]==1)cnt++;
            if(p[m-2][i]==1)cnt++;
            if(p[m-2][i+1]==1)cnt++;
            if(cnt!=0){
                a[m-1][i]=cnt;
            }
        }
        cnt=0;
    }
    for(int i=1;i<m-1;i++){
        if (p[i][0]==1){
            if(p[i-1][0]==1)cnt++;
            if(p[i+1][0]==1)cnt++;
            if(p[i-1][1]==1)cnt++;
            if(p[i][1]==1)cnt++;
            if(p[i+1][1]==1)cnt++;
            if(cnt!=0){
                a[i][0]=cnt;
            }
        }
        cnt=0;
    }
    for(int i=1;i<m-1;i++){
        if (p[i][n-1]==1){
            if(p[i-1][n-1]==1)cnt++;
            if(p[i+1][n-1]==1)cnt++;
            if(p[i-1][n-2]==1)cnt++;
            if(p[i][n-2]==1)cnt++;
            if(p[i+1][n-2]==1)cnt++;
            if(cnt!=0){
                a[i][n-1]=cnt;
            }
        }
        cnt=0;
    }
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            if (p[i][j]==1){
                cnt=0;
                for(int k=i-1;k<i+2;k++){
                    for(int l=j-1;l<j+2;l++){
                        // if(k!=i && l!=j){
                            if(p[k][l]==1){
                                if(k==i && l==j)continue;
                                else cnt++;
                            }
                        // }
                    }
                }
                if(cnt!=0){
                    a[i][j]=cnt;
                }
            }
        }
    }
    printf("Output image with labelled connected components:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}