/*
*Section:2
*Roll no.:22NA10011
*Name: Enuganti Yashaswini
*Assignment number-4
*Description:password
*/
#include<stdio.h>
int main()
{
    char c,P1,P2;
    int cnt=0;
    int dig=0;
    do{
        scanf("%c",&c);
        cnt++;
        printf("%c",c);
        if(((c<'A')||(c>'Z'))&&(cnt==1))
            printf("Password must start with an uppercase letter");
    }while(c!='/n');
    if((c<'0')||(c>'9')&&dig=1)
        printf("Password must contain a digit");
    if(c=='')
        printf("Password must not contain space");
        if((c!=$)||(c!=#)||(c!=&)||(c!=%)||(c!=@))
            printf("Must contain Any special char");







}
