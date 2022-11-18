/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>
#include <math.h>
#define s 4

void main(){

    float m1[s],m2[s],m3[s],m4[s];
    int i,j,k,l,A[s];
    float total=INFINITY;

    //in case it takes forever to put in the values
    /*int m1[s] = {8200, 8300, 6900, 9200};
    int m2[s] = {7700, 3700, 4900, 9200};
    int m3[s] = {1100, 6900, 500, 8600};
    int m4[s] = {800, 900, 9800, 2300};*/

    for(i=1;i<=s;i++){
        printf("enter vendor%d price for m1:",i);
        scanf("%f",&m1[i-1]);
    }

    for(i=1;i<=s;i++){
        printf("enter vendor%d price for m2:",i);
        scanf("%f",&m2[i-1]);
    }

    for(i=1;i<=s;i++){
        printf("enter vendor%d price for m3:",i);
        scanf("%f",&m3[i-1]);
    }

    for(i=1;i<=s;i++){
        printf("enter vendor%d price for m4:",i);
        scanf("%f",&m4[i-1]);
    }

    for (i=1;i<=s;i++){
        for (j=1;j<=s;j++){
            for (k=1;k<=s;k++){
                for (l=1;l<=s;l++){
                    if ((m1[i-1]+m2[j-1]+m3[k-1]+m4[l-1]<total)&&(i!=j)&&(i!=k)&&(i!=l)&&(j!=k)&&(j!=l)&&(k!=l)){
                        total=m1[i-1]+m2[j-1]+m3[k-1]+m4[l-1];
                        A[0]=i;
                        A[1]=j;
                        A[2]=k;
                        A[3]=l;
                    }
                }
            }
        }
    }

    printf("Total cost: %.2f\n",total);
    printf("Machine1-->vendor%d\n",A[0]);
    printf("Machine2-->vendor%d\n",A[1]);
    printf("Machine3-->vendor%d\n",A[2]);
    printf("Machine4-->vendor%d\n",A[3]);


}
