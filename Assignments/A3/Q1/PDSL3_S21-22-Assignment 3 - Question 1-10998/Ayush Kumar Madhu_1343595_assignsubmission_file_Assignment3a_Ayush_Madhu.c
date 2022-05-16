#include <stdio.h>

int length (char a[])
{
    int count=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        count+=1;
    }
    return count;        
}

int characters(char a[])
{
    int count=0;
    for (int i = 0; a[i]!=0 ; i++)
    {
        if (a[i]=='$' || a[i]=='*' || a[i]=='+' || a[i]=='/' || a[i]=='#' || a[i]=='@' || a[i]=='>' || a[i]=='<' || a[i]=='?' || a[i]=='_' || a[i]=='!')
        {
            count+=1;
        }
    }
    return count;
}

int digit(char a[])
{
    int count=0;
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]>='0' && a[i]<='9')
        {
            count+=1;
            if (count==5)
            {
                break;
            }
            
        }
        else
        {
            if (count>5)
            {
                break;
            }
            else
            {
                count=0;
            }
        }
    }
    return count;
    
}

int main()
{
    char username[]={},password[]={};
    int ul,pl;
    printf("Username : ");
    scanf("%s",&username);
    printf("Password : ");
    scanf("%s",&password);
    ul=length(username);
    pl=length(password);
    if (ul==pl)
    {
        printf("Not acceptable as username and password is same");
    }
    else if (pl<8 || pl>15)
    {
        printf("Not acceptable as invalid password length");
    }
    else if (characters(password)<2)
    {
        printf("Not acceptable as less than 2 characters");
    }
    else if (digit(password)>=5)
    {
        printf("Not acceptable as consecutive 5 digits in password");
    }
    else
    {
        printf("Acceptable");
    }

    return 0;
}