/*
* Section : 2
* Name : Rahul Kumar
* Roll no. : 22GG10032
* Assignment : 4
* Description : Program for password
*/
#include<stdio.h>
int main()
{
    char x;
    x='A';
    int l=0;
    while(x!='\n'){
        scanf("%c",&x);
        l++;
        if(!((l=1)>='A')&&((l=1)<='Z')){
            printf("Invalid password\n");
            printf("password must be start with an upper case letter\n");

        }
    }


    return 0;
}
