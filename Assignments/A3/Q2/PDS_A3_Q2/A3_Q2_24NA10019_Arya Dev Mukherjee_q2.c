#include<stdio.h>

int main(){
int d, w, c;
c=0;

printf("Please enter amount to be deposited: ");
scanf("%d", &d);
 
printf("Please enter amount to be withdrawn: ");
scanf("%d", &w);

if (w > d){
    printf("Deposited: %d \n Withdraw Failed: Balance is insufficient\n Balance: %d" ,d,d);
    }
else{    
    c=(d-w);
    printf("Deposited: %d \n Withdrew: %d \n Balance: %d" ,d,w,c);
    }

return 0;
}    

   




