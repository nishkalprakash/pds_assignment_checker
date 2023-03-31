/*
section 2
roll no: 22ex10022
name: ishita pathunda
assignment no. 4
Description:program to print the numero pyramid*/
#include<stdio.h>
int main(){
    int i,j,k,n,b;
    printf("enter the number of rows :\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=n-1;j++){
            if(j>=n-i&&j<=n+i)
                printf("%d ",k);
            else printf(" ");
        }

        printf("\n");
    }
    return 0;
}
