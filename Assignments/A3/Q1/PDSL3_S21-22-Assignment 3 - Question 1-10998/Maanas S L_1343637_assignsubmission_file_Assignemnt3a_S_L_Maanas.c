/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 3(a)
*/

#include <stdio.h>
int main()
{
    char username[100], password[100] ;
    char C[10]={0,1,2,3,4,5,6,7,8,9};
    int countpass=0, countchar=0, countlow=0, counthigh=0,countdigit=0,countcons=0,temp=0,countuser=0,countusername=0 ;
    printf("Username : ");
    scanf("%s",username);
    printf("Password : ");
    scanf("%s",password);
    for (int i=0; password[i] != 0;i++)
    {
        countpass++;
        if(password[i] == '$' || password[i] == '*' || password[i] == '+' || password[i] == '/' || password[i] == '#' || password[i] == '@' || password[i] == '<' || password[i] == '>' || password[i] == '?' || password[i] == '_' || password[i] == '!')
        {
            countchar++;
        }
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            countlow++;
        }
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            counthigh++;
        }
        for (int j=0;j<10;j++)
        {
            if (password[i]==C[j])
            {
                countdigit++;
            }
        }
        for (int k=i+1;password[k]!=0;k++)
        {
            if (password[i]==password[k])
            {
                countcons++;
            }
        }
    }
    if (countpass<=15 && countpass>=8 && countchar>=2 && countlow>=1 && counthigh>=1 && countdigit<=5 && countcons<=5)
    {
        printf("Acceptable\n");
    }
    else
    {
        printf("Not Acceptable");
    }
    printf("\n");
    return 0;
}