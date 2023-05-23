#include <stdio.h>
#include <stdlib.h>
/*NAME - NAIN ADITYA
SEC-2 , ROLL - 22AG10029
LAB 7 QUESTION 2*/
int main(){
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    int **ptr1,**ptr2,**ptr3,k=0;
    ptr1=(int**) calloc(m,sizeof(int*));
    for (int i=0;i<m;i++){
        ptr1[i]=(int*)calloc(n,sizeof(int));}

    for (int i =0;i<m;i++){
        for(int j=0;i<n;j++){
        scanf("%d",&ptr1[i][j]);
        if (j==n-1)break;}
    if (i==m-1)break;}

    ptr2=(int**) calloc(n,sizeof(int*));
    for (int i=0;i<n;i++){
        ptr2[i]=(int*)calloc(p,sizeof(int));}

    for (int i =0;i<n;i++){
        for(int j=0;i<p;j++){
        scanf("%d",&ptr2[i][j]);
        if (j==p-1)break;
    }if (i==n-1)break;}
if (m<=n && n<=p){
    for (int i=0;i<m;i++){int t;
    for (int j=0 ;j<n;j++){
        t=ptr1[i][j];
        ptr1[i][j]=ptr2[i][j];
        ptr2[i][j]=t;}}}
else if (n<=m && p<=n){
    for (int i=0;i<n;i++){int t;
    for (int j =0 ;j<p;j++){
        t=ptr2[i][j];
        ptr2[i][j]=ptr1[i][j];
        ptr1[i][j]=t;
    }}}
/*else {for (int i=0;i<n;i++){int t;
    for (int j =0 ;i<n;j++){
        t=ptr1[i][j];
        ptr1[i][j]=ptr2[i][j];
        ptr2[i][j]=t;}}}*/
printf("matrix A\n");
for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)printf("%d ",ptr1[i][j]);
        printf("\n");}
printf("matrix B\n");
for (int i=0;i<n;i++){
        for (int j=0;j<p;j++)printf("%d ",ptr2[i][j]);
        printf("\n");}
ptr3=(int**) calloc(m,sizeof(int*));
for (int i=0;i<m;i++){
        ptr3[i]=(int*)calloc(p,sizeof(int));}
for (int i =0;i<m;i++){int sum=0;
        for (int j=0;j<p;j++){
            int a;
            a=(ptr1[i][j])*(ptr2[j][i]);
            sum+=a;}
            ptr3[i][k]=sum;k++;sum=0;}
printf("matrix C\n");
for (int i=0;i<m;i++){
        for (int j=0;j<p;j++)printf("%d ",ptr3[i][j]);}

free(ptr1);
free(ptr2);
free(ptr3);
return 0;
}
