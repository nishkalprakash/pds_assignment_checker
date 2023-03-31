/*
* Section 2
* Roll No : 22ME10015
* Name : Ayush Chanderia
* Assignment No : 4
* Description : Program to print the Numero-pyramid.
*/
#include <stdio.h>
int main(){
    int row;

    printf("Enter the number of rows:");
    scanf("%d",&row);

        while(row<1){
             printf("Enter the number of rows:");
             scanf("%d",&row);
        }
        for(int i=1;i<=row;i++){
            for(int j=1;j<=(row-i);j++){
                printf(" ");
            }
            for(int k=i;k<=2*i-1;k++){
                printf("%d",k%10);
            }
            for(int l=2*i-2;l>=i;l--){
                printf("%d",l%10);
            }
            printf("\n");
        }
        return 0;
}

