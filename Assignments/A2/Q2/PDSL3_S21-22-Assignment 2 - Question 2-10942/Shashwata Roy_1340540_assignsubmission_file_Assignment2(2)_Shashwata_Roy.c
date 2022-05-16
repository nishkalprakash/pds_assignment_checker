/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/

#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

int main(){
    srand(time(NULL));
    double x=0.0,D=0.0,De;
    int n,k,i,j;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    int p;
    for(i=0;i<k;i++){
        for(j=0;j<n;j++){
            p = rand() & 1 ? -1 : 1;
            x+=p;
        }
        D+=(x*x);
    }
    De=sqrt(D/k);
    printf("The expected distance is: %lf",De);
    return 0;
}
