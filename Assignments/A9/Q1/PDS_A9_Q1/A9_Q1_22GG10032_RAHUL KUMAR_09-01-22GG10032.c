/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 09
* Question Number - 01
* Description - Check given number is Fibonacci number or not
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,x=0,y=1;
    printf("Enter the any positive number : ");
    scanf("%d",&n);
    if(n<0)printf("Please give positive number\n");
    else if(n==0)printf("%d is a fibonacci number\n",n);
    else{
        int m=0;
        while(m<=n){
             m = x + y;
             x = y;
             y = m;
        }

    if(n==x){
        printf("%d is a fibonacci number\n",n);
    }
     else if(pow(n-m,2)==pow(n-x,2)){
        printf("Nearest fibonacci number is %d\n",x);
    }
    else if(pow(n-m,2)>pow(n-x,2)){
        printf("Nearest fibonacci number is %d\n",x);
    }
    else {
       printf("Nearest fibonacci number is %d\n",y);
    }
    }
    return 0;
}
