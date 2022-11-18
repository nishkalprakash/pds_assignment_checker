#include <stdio.h>

int compare(char a[],char b[],int start)  
{  
    int flag=0,i=0;  
    while(b[i]!='\0')  
    {  
        if(a[i+start]=='\0')
        flag=0;
        break;
        if(a[i+start]!=b[i]) 
        { 
        flag=1;  
        break;  
        }  
        i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
} 
int strlength(char password[])
{
    int i;
    for (i = 0; password[i] != '\0'; ++i);
    return i;
}
int search(char str[], char c)
{
    int count=0,i;
    for(i=0;i<strlength(str);i++)
    {
        if(str[i]==c)
        count++;
    }
    return count;
}
int main()
{
    int chk=0,chkcl=0,chksl=0,chkspl=0,chkcons=0,chkd=0;//various checkers for each parameter
    char username[15], s[15];
    printf("Enter username\n");
    scanf("%s", username);
    printf("Enter password\n");
    scanf("%s", s);
    if((strlength(s)>15||strlength(s)<8))
    chk=1;
    else
    {
        for(int i=0;i<strlength(s);i++)
        {
            if(compare(s,username,i)==0)
            chk=1;
            if(s[i]>47&&s[i]<58)
            chkd++;
            else
            chkd=0;
            if(chkd==5)
            {
                chk=1;
                break;
            }
            if(s[i]>64&&s[i]<91)
            chkcl=1;
            if(s[i]>96&&s[i]<123)
            chksl=1;
            if(s[i]=='$'||s[i]=='*'||s[i]=='+'||s[i]=='/'||s[i]=='#'||s[i]=='@'||s[i]=='<'||s[i]=='>'||s[i]=='?'||s[i]=='_'||s[i]=='!')
            chkspl++;
            if(i!=0)
            {
                if(s[i]==s[i-1])
                chkcons++;
            }
            if(chkcons==5)
            chk=1;
            if(search(s,s[i])>4)
            chk=1;
        }
    }
    if(chk==0)
    printf("Acceptable");
    else
    printf("Not Acceptable");
    printf("\n");
    
    return 0;
}