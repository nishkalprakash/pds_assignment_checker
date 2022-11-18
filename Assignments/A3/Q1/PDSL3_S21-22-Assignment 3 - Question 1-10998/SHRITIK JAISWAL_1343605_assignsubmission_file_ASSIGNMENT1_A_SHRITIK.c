//shritik jaiswal
//21BT30026 SEC-3
//MAC OS
#include <stdio.h>

int main()
{
    const int ARRAY=50;
     //taking string lenght =50 for username and password.
    char username[ARRAY],pswrd[ARRAY];             
    int i,j,k=0,flag,count=0;
    //scanning the username and the password
    printf("Enter your username\n");
    scanf("%s",&username[0]);
    printf("Enter your password\n");
    scanf("%s",&pswrd[0]);

    for (i=0; username[i]!= '\0';i=i+1)
    {
        flag=1;
        for(j=0;pswrd[j]!='\0';j=j+1)
        {
            if (username[i+j]== pswrd[j]) 
            {
                flag = 0;
            }
        }
        if(flag==0)
        {
            printf("passwrord should not match the username:unacceptable\n");
           
        }
    }
    for(i=0;pswrd[i]!='\0';i++)k++;
    if(k<8||k>15)
    {
        printf("password shoud have 8-15 characters :unacceptable\n");
        
    }
    for(i=0;pswrd[i]!='\0';i++)
    {
        flag=0;
        if(pswrd[i]=='$'|| pswrd[i]=='*'||pswrd[i]=='+'||pswrd[i]=='/'||pswrd[i]=='#'||pswrd[i]=='@'||pswrd[i]=='<'||pswrd[i]=='>'||pswrd[i]=='?'||pswrd[i]=='_'||pswrd[i]=='!')
        {
            flag=flag+1;
        }
    }
    if(flag==0)
    {
        printf("passwrod should have atleast 2 special characters: unacceptable\n");
      
    }
    for(i=0;pswrd[i]!='\0';i++)
    {
        flag=0;
        if(pswrd[i]>'a'&& pswrd[i]<'z')
        {
            flag=flag+1;
            break;
        }
    }
    if(flag==0)
    {
        printf("password should have a lower case letter:Unacceptable\n");
         
    }
         for(i=0;pswrd[i]!='\0';i++)
    {
        flag=0;
        if(pswrd[i]>'A'  &&  pswrd[i]<'Z')
        {
            flag=flag+1;
            break;
        }
    }
      if(flag==0)
      {
         printf("password should have a upper case letter:Unacceptable\n");
         count=count+1;
      }
      k=0;
     for(i=0;pswrd[i]!='\0';i++)
    {
        if(pswrd[i]==pswrd[i+1])
        {
            k=k+1;
        }
        if(k>5)
        break;
    }
    if(k>5)
    {
        printf("Not acceptable\n");
    }
    printf("Acceptable\n");
    return 0;
}