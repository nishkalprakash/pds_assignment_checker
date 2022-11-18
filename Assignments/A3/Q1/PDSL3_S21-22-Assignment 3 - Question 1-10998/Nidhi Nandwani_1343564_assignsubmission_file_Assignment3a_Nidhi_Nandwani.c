/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include<stdio.h>

int length(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

int cond_a(char s1[], char s2[], int l1, int l2)
{
    // function to check that password does not contain username
    // s1 = username, s2 = password
    int min;
    if(l2<l1)  min=l2;
    else min=l1;
    for(int i=0; i<=min; i++)
    {
        for(int j=0;(i+j)<l2; j++)
        {
            if(s2[i+j] != s1[j])
            break;
            if(j==l1)
            return 1;
        }
    }
    return 0;
}

int lowerCase(char s2[], int l2)
{
    // function to check atleast one lowercase character exists
    int ctr;
    for(int i=0;i<l2;i++)
    {
        if((s2[i]>='a') && (s2[i]<='z'))
       ctr++;
    }
    if(ctr<1) return 1;
    else return 0;
}

int upperCase(char s2[], int l2)
{
    // function to check atleast one uppercase character exists
    int ctr;
    for(int i=0;i<l2;i++)
    {
        if((s2[i]>='A') && (s2[i]<='Z'))
        ctr++;
    }
    if(ctr<1) return 1;
    else return 0;
}

int specialCharacter(char s2[], int l2)
{
    int ctr;
    for(int i=0;i<l2;i++)
    {
        if(s2[i] == '$' || s2[i] == '*' || s2[i] == '+' || s2[i] == '/' || s2[i] == '#' || s2[i] == '@' || s2[i] == '<' || s2[i] == '>' || s2[i] == '?' || s2[i] == '_' || s2[i] == '!' )
        ctr++;
    }
    if(ctr<2) return 1;
    else return 0;
}

int consecutiveDigits(char s2[], int l2)
{
    int ctr;
    ctr=0;
    for(int i=0; i<l2; i++)
    {
        for(int j=0;i+j<l2,j<5;j++)
        {
            if((s2[i+j]<='9')&&(s2[i+j]>='0'))
               {ctr=1; break;}
        }
       if(ctr==1) return 1;
       else return 0;
    }
}
    int repeatCharacters(char s2[], int l2)
{
    int ctr; char temp;
    ctr=0;
    for(int i=0; i<l2; i++)
    {
        temp = s2[i];
        for(int j=0; j<l2; j++)
        {
            if(s2[j] == temp)
            ctr++;//counting the no. of times a character is repeated
        }
        if(ctr>5)
        {break;return 1;}
    }
    return 0;
}
int main()
{
    char un[25]; char pd[25];
    printf("Username: ");
    scanf("%s",&un);
    printf("Password: ");
    scanf("%s",&pd);
 int l1, l2;
    l1 = length(un);
    l2 = length(pd);
    int cond1 = cond_a(un, pd, l1, l2);
    int lc = lowerCase(pd, l2);
    int uc = upperCase(pd, l2);
    int sc = specialCharacter(pd, l2);
    int cond5 = consecutiveDigits(pd, l2);
    int cond6 = repeatCharacters(pd, l2);
    if(l2<8 || l2>15 || cond1 == 1 || lc == 1 || uc == 1|| sc == 1|| cond5 == 1|| cond6 == 1)
    printf("Not Acceptable");
    
    else
    printf("Acceptable");
    return 0;
}