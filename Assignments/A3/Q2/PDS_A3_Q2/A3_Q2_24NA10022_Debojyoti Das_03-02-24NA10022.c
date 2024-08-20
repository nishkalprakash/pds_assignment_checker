#include<stdio.h>
int main()
 {
    int w,d,b=0;
    printf("enter amount to be deposited:\n");
    scanf("%d", &d);
    b=b+d;
    printf(" Enter amount to be withdrawn: \n");
    scanf("%d", &w);
    if(b>=w)
       {
          b=b-w;
          printf("deposited: %d \n",d);
          printf("withdrew: %d \n",w);
          printf("balance: %d \n",b);
       }
    else
       {
          printf("deposited: %d \n",d);
          printf("Balance is insufficient \n");
          printf("balance: %d \n",b);
       }
       
  }
