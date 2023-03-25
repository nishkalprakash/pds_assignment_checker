#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter any two number : \n");
    scanf("%d %d",&n1,&n2);
    if(n1 >= -999 && n1 <= 999 && n2 >= -999 && n2 <= 999)
        printf("Valid Input \n");
    else
        printf("Wrong Input \n");
        int rev = 0,rem;
        while(n1 !=0)
        {
            rem = n1 % 10;
            rev = rev * 10 + rem;
            n1 /= 10;
        }
        if(n2 == rev)
            printf("Perfect Pair");
        else
            printf("Not A Perfect Pair");
    return 0;
}
