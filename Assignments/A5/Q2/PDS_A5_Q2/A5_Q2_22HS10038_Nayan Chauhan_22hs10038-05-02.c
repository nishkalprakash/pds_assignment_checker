/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 5
* Description : Program to check Goldbach's conjecture
*/
#include <stdio.h>
int primecheck(int i)
{
    int t=1;
    for(int k=2;k<i;k++)
        {
            if(i%k==0){
                t=0;
                break;
            }
        }
    return t;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(n<4) printf("-1");
    else if(n%2==1) printf("-1");//Odd numbers are not to be checked only even numbers are to be checked according to the test cases
    else{
        int check1, check2, flag=0;
        for(int i=2;i<=n;i++)
        {
            check1=primecheck(i);
            check2=primecheck(n-i);
            if(check1==1 && check2==1){
                flag = 1;
                printf("%d, %d", i, (n-i));
                break;
            }
        }
        if(flag==0) printf("-1");
    }
}
