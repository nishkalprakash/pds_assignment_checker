/*
section - 2
roll no: 22ME10072
name: Samares Malik
assignment - 04
description
*/
#include<stdio.h>
int main(){
    int N;
    printf("Enter the number of rows:");
    scanf("%d",&N);
    printf("\n");
    for (int i =1;i<=N;i++){//loop for column
        for(int j = i;j<(2*i);j++){//loop for half row
                    printf("%d",j);
        }
        for (int k = ((2*i)-2);k>=i;k--){ //loop for another half row
            printf("%d",k);
        }
        printf("\n");//for new row

    }
    return 0;





}
