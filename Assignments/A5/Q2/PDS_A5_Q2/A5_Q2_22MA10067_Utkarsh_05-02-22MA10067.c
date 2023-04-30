
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 5
* Description : Program to
*/
#include <stdio.h>
#include <math.h>

int prime(int pr){
    int flag=0;
    for (int i=2;i<=sqrt(pr);i++){
        if (pr%i == 0) {flag=1;}}
    if (pr==1) {flag=1;}
    return flag;




}

int main()
{
    int n;
    printf("Enter an even number:");
    scanf("%d",&n);
    if (prime(n)==0) printf("-1");
    else {
        for (int i=2;i<n;i++){
            if (prime(i)==0 && prime(n-i)==0) {
            printf("%d + %d",i,n-i);
            break;
            }
        }

    }


    return 0;

}

