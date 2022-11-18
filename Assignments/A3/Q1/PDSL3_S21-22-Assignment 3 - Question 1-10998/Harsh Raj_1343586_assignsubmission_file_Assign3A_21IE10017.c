#include<stdio.h>
/* Harsh Raj
Roll : 21IE10017   */
int main()
{
    char pw[30],id[30],p[30];
    int flag=0,k,c,l,u,s;
    l=u=s=0;
    do
    {
    printf("Enter username");
    scanf("%s",id);
    printf("Enter password");
    scanf("%s",pw);
    k=slen(id);
    int lp=slen(pw);
    if(lp<8 || lp>15)
    {
        printf("enter valid password with more than 8 and less than 15 characters");
        flag=1;
        break;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=i;j<(k+i);j++)
        p[j-i]=pw[j];
        p[k]='\0';
        if(cmp(p,id)==0)
        {
            printf("username cannot be a part of password");
            flag=1;
            break;
        }

    }
    for(int i=0;i<l;i++)
    {
        if(pw[i]>='a' && pw[i]<='z')
            l++;
        if(pw[i]>='A' && pw[i]<='Z')
            u++;
        if(pw[i]=='$' ||pw[i]=='*' ||pw[i]=='+' ||pw[i]=='/' ||pw[i]=='#' ||pw[i]=='@' ||pw[i]=='<' ||pw[i]=='>' ||pw[i]=='?' ||pw[i]=='_' ||pw[i]=='!')
            s++;
    }
    if(l<1 && u<1 && s<2)
    {
        printf("password requires atleast 1 lower and upper case and atleast 2special characters");
        flag=1;
    }
    for(int i=0;i<lp-5;i++)
    {
        c=0;
        for(int j=i;j<=i+5;j++)
    {
        if((int)pw[j]>=48 && (int)pw[j]==57)
        c++;
    }
    if(c>5)
       {
       printf("password has repetitive digits");
            flag=1;
    break;
       }
    }
    for(int i=0;i<lp;i++)
    {
        c=0;
        char ch=pw[i];
        for(int j=i;j<lp;j++)
            if(ch==pw[j])
            c++;
            if(c>5)
            {
                printf("character repeated more than 5times");
                flag=1;
                break;
            }
    }



}while(flag==1);
if(flag==0)
    printf("password acceptable");
return 0;
}
int slen(char pw[])
{
    int c=0;
    while(pw[c]!='\0')
        c++;
        return c;
}
int cmp(char pw[],char id[])
{
    int c=slen(pw),flag=0;
    if(slen(pw)==slen(id))
    {
        for(int i=0;i<c;i++)
            if(pw[i]==id[i])
            flag++;
    } else return 1;
    if(flag==c)
        return 0;
}
