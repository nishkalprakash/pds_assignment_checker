/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/

#include<stdio.h>
#include<stdlib.h>
void check(char a[]);
main()
{
    char a[100];
    printf("Enter your password that should satisfy the following criteria\n1. password should contain atleast one capital letter\n2. should have one digit from(o-9)\n3. atleast one special charecter($,*,#,&)\n4. length should be atleast 8\n");
    scanf("%s",a);
    check(a);


}
void check(char a[])
{
    char c;
    int len,i,flag1=0,flag2=0,flag3=0,flag4=0;
    len=strlen(a);
    if(len<8)
    flag1=1;
    else
    {
        for(i=0;i<len;i++)
        if((a[i]>=48&&a[i]<=58))
        {
            flag2=0;

            break;
        }
        else
        flag2=1;

        for(i=0;i<len;i++)
        if((a[i]>=65&&a[i]<=90))
        {
            flag3=0;

            break;
        }
        else
        flag3=1;

        for(i=0;i<len;i++)
        if(a[i]=='#'||a[i]=='$'||a[i]=='*'||a[i]=='&')
        {
            flag4=0;

            break;
        }
        else
        flag4=1;


    }
    if(flag1==1||flag2==1||flag3==1||flag4==1)
    printf("\nWrong password\n");
    else
    printf("your password is successfully created\n");


    return;
}

