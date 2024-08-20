#include<stdio.h>
int main()
{
    int deposit,withdraw,balance;
    printf("enter deposit : ");
    scanf("%d",&deposit);
    printf("withdraw : ");
    scanf("%d",&withdraw);
    
    
    balance=deposit-withdraw;
    printf("deposited= %d",deposit);
    
    if ((withdraw>deposit))
    {
        printf("withdraw failed : balance is insufficient");
    }
    else
    {
        printf("withdrew : %d \n",withdraw);
    } 
    printf("balance : %d",balance);
    printf("exit");
    return 0;
}       
    
    
            
