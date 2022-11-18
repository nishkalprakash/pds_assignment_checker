/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 3a
Package- stdio.h
*/
#include <stdio.h>
#define SIZE 100
int main()
{ 
    char username[SIZE];
    char password[SIZE];
    printf("Username: ");
    scanf("%s",username);
    printf("Password: ");
    scanf("%s",password);
    int username_length=0,password_length=0;
    for (int i=0; username[i] != '\0'; i++) 
    username_length++;
    for (int i=0; password[i] != '\0'; i++) 
    password_length++;
    if((password_length<8)||(password_length>15))
    {
        printf("Not acceptable\n");
        return 0;
    }

for(int i=0;i<password_length-username_length+1;i++)
{
    int j =1;int c = 0;
    if(password[i]==username[0])
    {
        
        while(j<username_length)
        {   c=1;
            if(password[i+j]!=username[j])
            {
                c=0;
                break;
            }
            j++;
        }
    }
    if(c==1)
    {
        printf("Not acceptable\n");
        return 0;
    }
}


    int uppercase =0,lowercase=0,spcl_char=0;
    for(int i=0;password[i]!= '\0';i++)
    {
        if((password[i]>64)&&(password[i]<91))
        {
            uppercase++;
        }
        if((password[i]>96)&&(password[i]<123))
        {
            lowercase++;
        }
        if((password[i]=='$')||(password[i]=='*')||(password[i]=='+')||(password[i]=='/')||(password[i]=='#')||(password[i]=='@')||(password[i]=='<')||(password[i]=='>')||(password[i]=='?')||(password[i]=='_')||(password[i]=='!'))
        {
            spcl_char++;
        }
    }
    if((uppercase==0)||(lowercase==0)||(spcl_char<2))
    {
        printf("Not acceptable\n");
        return 0;
    }
    for(int i=0;i<password_length-4;i++)
    {
        if((password[i]>47)&&(password[i]<58))
        {
            if((password[i+1]>47)&&(password[i+1]<58)&&(password[i+2]>47)&&(password[i+2]<58)&&(password[i+3]>47)&&(password[i+3]<58)&&(password[i+4]>47)&&(password[i+4]<58))
            {
                printf("Not acceptable\n");
                return 0;
            }
        }
    }
    for(int i=0;password[i]!= '\0';i++)
    {  int c=1;
        for(int j = i+1;j<password_length;j++)
        {
          if(password[j]==password[i])
          {
              c++;
          }
        }
        if(c>=5)
        {
            printf("Not acceptable\n");
            return 0;
        }
    }

    printf("Acceptable\n");
    return 0;
}
