#include <stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 7
Description: Generate n numbers and store them in array
*/

int main(){
    char *X,*Y,*Z;
    int n,i=1,m;
    X=(char *)malloc(25);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
        printf("\nEnter the %d name: ",i);
        scanf("%s",&X[i]);
        i++;
    }
    while(i<=n){
        printf("%s",X[i]);
        i++;
    }

     Y=(char *)malloc(25);
    printf("Enter the value of m: ");
    scanf("%d",&m);
    while(i<=n){
        printf("\nEnter the %d name: ",i);
        scanf("%s",&Y[i]);
        i++;
    }
    while(i<=n){
        printf("%s",Y[i]);
        i++;
    }

    for(i=1;i<n;i++){
        Z[i]=X[i];
    }
    for(i=1;i<m;i++){
        Z[i+n]=Y[i];
    }
    return 0;
}

