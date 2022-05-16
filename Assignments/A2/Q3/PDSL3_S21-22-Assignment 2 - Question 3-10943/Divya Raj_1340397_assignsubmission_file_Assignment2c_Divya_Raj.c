/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/

#include<stdio.h>
int main(){
    int i, j, k, l, sum;
    int m1[4] = {8200, 8300, 6900, 9200};
    int m2[4] = {7700, 3700, 4900, 9200};
    int m3[4] = {1100, 6900, 500, 8600};
    int m4[4] = {800, 900, 9800, 2300};
    sum = m1[0]+m2[1]+m3[2]+m4[3];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            for(k = 0; k < 4; k++){
                for(l = 0; l < 4; l++){
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l && sum>(m1[i]+m2[j]+m3[k]+m4[l])){
                        sum = m1[i]+m2[j]+m3[k]+m4[l];
                    }
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}