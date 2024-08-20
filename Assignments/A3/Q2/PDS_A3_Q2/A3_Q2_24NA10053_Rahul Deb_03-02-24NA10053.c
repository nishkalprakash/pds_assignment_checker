#include<stdio.h>
void main(){
    int balance=0, inp,d,w;
    printf("*****DEPOSITING MONEY*****\n");
    printf("How much would you like to deposit?...");
    scanf("%d",&d);
    balance = balance + d;
    printf("Deposited: %d",d);
    printf("\n");
    printf("*****WITHDRAWING MONEY*****\n");
    printf("How much would you like to withdraw?...");
    scanf("%d",&w);
    printf("\n");
    if(w>balance){printf("Withdraw Failed: Balance is insufficient");}
    else{printf("withdrew: %d",w);
    balance = balance -w;}
    
    printf("*****SHOWING BALANCE*****\n");
    printf("%d",balance);
    
}
