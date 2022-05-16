/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void main(){

    srand(time(NULL));

    int n,k;
    float d=0,D=0,Exp_D;
    int p;
    int i,j;

    printf("enter value for n:");
    scanf("%d",&n);
    printf("enter the number of iterations:");
    scanf("%d",&k);

    for (i=1;i<=k;i++){
        for (j=1;j<=n;j++){
            p = rand() & 1 ? -1 : 1;
            d=d+p;/*gives distance moved in jth iteration*/
        }
        D=D+d*d;
    }

    Exp_D=sqrt(D/((float)k));
    printf("Expected distance:%f",Exp_D);


}
