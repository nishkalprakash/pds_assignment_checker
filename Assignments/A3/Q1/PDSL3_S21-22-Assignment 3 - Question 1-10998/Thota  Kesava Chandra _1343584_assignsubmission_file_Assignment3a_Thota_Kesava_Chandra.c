/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>

//string length calculator 
int slen(char a[])
{
    
    int count =0;
    for (int i=0;a[i]!='\0';i++)
    {
        count ++;
    }
    return count;
}


int main()
{
    char un[15],pw[16]; 
    int sp_c[]={36,42,43,47,35,64,60,62,63,33,95},pw_len,un_len,flag;
    printf("Username : ");
    scanf("%s",un);
    printf("Password : ");
    scanf("%s",pw);
    pw_len = slen(pw);
    un_len = slen(un);
    if (pw_len<8 || pw_len>15)
    {
        printf("Not Acceptible\n");
        printf("Password length error 7<length<16\n");
        return 0;
    }
    
    //lower case finder
    for (int i=0;i<pw_len;i++)
    {
        if (pw[i]>96 && pw[i]<123)
        {
            flag =1;
            break;
        }
    }
    if (flag ==0)
    {
        printf("Not acceptible\n");
        printf("include a lower case letter\n");
        return 0;
    }
    
    
    //upper case finder
    flag=0;
    for (int i=0;i<pw_len;i++)
    {
        if (pw[i]>64 && pw[i]<91)
        {
            flag =1;
            break;
        }
    }
    if (flag ==0)
    {
        printf("Not acceptible\n");
        printf("include a upper case letter\n");
        return 0;
    }
    
    
    //special character finder
    flag=0;
    for (int i=0;i<pw_len;i++)
    {
        for (int j=0;j<11;j++)
        {
            if (pw[i]==sp_c[j])
            {
                flag++;
                break;
            }
        }
    }
    if (flag<2)
    {
        printf("Not acceptible\n");
        printf("include atleast two special characters\n");
        return 0;
    }
    
    
    //consecutive digit finder
    flag=0;
    for (int i=0;i<pw_len;i++)
    {
        for (int j=48;j<58;j++)
        {
            if (pw[i]==j)
            {
                flag++;
                break;
            }
            if (j==57)
            {
                flag=0;
            }
        }
        if (flag==5)
        {
            printf("Not Acceptible\n");
            printf("too many consecutive digits\n");
            return 0;
        }
    }
    
    
    //repeated characters finder
    for (int i=0;i<pw_len;i++)
    {
        flag =0;
        for (int j=0;j<pw_len;j++)
        {
            if (pw[i]==pw[j])
            {
                flag++;
                break;
            }
            
        }
        if (flag>5)
        {
            printf("Not Acceptible\n");
            printf("too many repeated characters\n");
            return 0;
        }
    }
    

    //username finder
    for (int i=0;i<pw_len;i++)
    {
        for (int j=0;j<un_len;j++)
        {
            if (pw[i+j]!=un[j])
            {
                break;
            }
            if (j==un_len-1)
            {
                printf("Not Acceptible\n");
                printf("password should not contain username\n");
                return 0;
            }
        }
        
    }
    
    
    printf("Acceptible\n");
    return 0;
}