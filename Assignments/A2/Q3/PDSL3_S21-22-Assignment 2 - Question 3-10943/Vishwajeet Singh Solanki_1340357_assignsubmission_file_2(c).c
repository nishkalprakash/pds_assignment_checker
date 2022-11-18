
/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:2(c)
*/
#include<stdio.h>

int main(){
    int m1[4], m2[4], m3[4], m4[4], cost = 0, a, b, c, d, min = 99999999;
    printf("price list of machine 1\n");
    for(int i = 0; i<4; i++){
        scanf("%d", &m1[i]);
        if(m1[i] < min){
            min = m1[i];
            a = i;
        }
    }
    min =99999999;
    cost += m1[a];
     printf("price list of machine 2\n");
    for(int i = 0; i<4; i++){
        scanf("%d", &m2[i]);
        if(m2[i]<min && (i!=a)){
            min = m2[i];
            b = i;
        }
    }
    min = 99999999;
    cost += m2[b];
    printf("price list of machine 3\n");
    for(int i = 0; i<4; i++){
        scanf("%d", &m3[i]);
        if(m3[i] < min && (i!=a && i!=b)){
            min = m3[i];
            c = i;
        }
    }
    min = 99999999;
    cost += m3[c];
    printf("price list of machine 4\n");
    for(int i = 0; i<4; i++){
        scanf("%d", &m4[i]);
        if(m4[i] < min && (i!=a && i!=b && i!=c)){
            min = m4[i];
            d = i;
        }
    }
    cost += m4[d];
    printf("Total Cost = %d\n", cost);
    printf("Machine1 - Vendor %d\n", a+1);
    printf("Machine2 - Vendor %d\n", b+1);
    printf("Machine3 - Vendor %d\n", c+1);
    printf("Machine4 - Vendor %d\n", d+1);

    return 0;
}
