/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:1(a)
*/
# include<stdio.h>

int strlength(char A[])
{
    int i;
    for(i=0; A[i]!='\0';i++);
    return i;
}

int condition_d(char pd[])
{
    int uc=0,lc=0,symbol=0,i=0;
    while(pd[i]!='\0')
    {
        if((pd[i]>='a')&&(pd[i]<='z'))
        {
            lc++;
        }
        if((pd[i]>='A')&&(pd[i]<='Z'))
        {
            uc++;
        }
        if((pd[i]=='$')||(pd[i]=='*')||(pd[i]=='+')||(pd[i]=='/')||(pd[i]=='#')||(pd[i]=='@')||(pd[i]=='<')||(pd[i]=='>')||(pd[i]=='?')||(pd[i]=='_')||(pd[i]=='!'))
        {
            symbol++;
        }
        i++;
    }
    if((uc>=1)&&(lc>=1)&&(symbol>=2))
    {
        return 1;
    }
    return 0;
}

int condition_e(char pd[])
{
    int i =0;
    while(pd[i]!='\0')
    {
        if((pd[i]>='0')&&(pd[i]<='9'))
        {
            if(pd[i]==(pd[i-1]+1)==(pd[i-2]+2)==(pd[i-3]+3)==(pd[i-4]+4))
            {
                return 0;
            }
        }
        i++;
    }
    return 1;
}

int condition_f(char pd[])
{
    int i=0,j=0,count=0;
    while(pd[i]!='\0')
    {
        while(pd[j]!='\0')
        {
            if(pd[i]==pd[j])
            {
                count++;
            }
            j++;
        }
        if(count>=5)
        {
            return 0;
        }
        else
        {
            count = 0;
        }
        i++;
    }
    return 1;
}



int main()
{
    char username[20],password[20];
    int u=0,p=0,i;
    printf("Enter the username:\n");
    scanf("%s",username);
    printf("Enter the password:\n");
    scanf("%s",password);
    int U = strlength(username);
    int P = strlength(password);
    for(i=0;i<P;i++)
    {
        if(password[i]==username[u])
        {
            if(u==(U-1)) break;
            u++;
        }
        else
        {
            u = 0;
        }
    }

    if((u==(U-1))||(P>15)||(P<8)||(condition_d(password)==0)||(condition_e(password)==0)||(condition_f(password)==0))
    {
        printf("Not Acceptable.\n");
        return 0;
    }

    printf("Acceptable.\n");
    return 0;

}
