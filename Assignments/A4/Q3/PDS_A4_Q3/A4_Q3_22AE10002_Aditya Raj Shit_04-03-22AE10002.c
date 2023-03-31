/*
* Section 2
* Roll No : 22AE10002
* Name : Aditya Raj Shit
* Assignment No : 3
* Description : Program to numero-pyramid.
*/

#include<stdio.h>

int main(){
    int row=1;
    int n;
    printf("Enter the number of rows: ");   //taking user input
    scanf("%d",&n);

    while(row<=n){                          //running the loop till we reach the bottom of the pattern.
        int col=1,val=row;
        while(col<=n-row){                  //printing the spaces
            printf(" ");
            col++;
        }

        while(col>n-row && col<=n){         //running till we reach middle of the loop.
            if(val<0){
                val=9;
            }
            if(val>9){
                val=0;
            }
            printf("%d",val);
            val++;
            col++;
        }

        val-=2;
        while(col>n && col<=n+row-1){   //running from middle to end of one row.
            if(val<0){
                val=9;
            }
            if(val>9){
                val=0;
            }
            printf("%d",val);
            val--;
            col++;
        }
        row++;
        printf("\n");               //moving ahead to next row.
    }
}
