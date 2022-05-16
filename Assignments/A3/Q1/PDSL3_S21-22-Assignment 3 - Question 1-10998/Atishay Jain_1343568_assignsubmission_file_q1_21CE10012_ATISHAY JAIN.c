
#include<stdio.h>

int main()
{
    char pass[32],user[25],p[32];
    int flag=0,k,c,l,u,s;
    do
    {
    printf("Enter username ");
    scanf("%s",user);
    printf("Enter password ");
    scanf("%s",pass);
    int lu=len(user);
    k=lu;
    int lp=len(pass);
    if(lp<8 || lp>15)
    {
        printf("enter valid password with more than 8 and less than 15 characters ");
        flag=1;
        break;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=i;j<(k+i);j++)
        p[j-i]=pass[j];
        p[k]='\0';
        if(cmp(p,user)==0)
        {
            printf("username cannot be a part of password ");
            flag=1;
            break;
        }

    }
    for(int i=0;i<l;i++)
    {
        if(pass[i]>='a' && pass[i]<='z')
            l++;
        if(pass[i]>='A' && pass[i]<='Z')
            u++;
        if(pass[i]=='$' ||pass[i]=='*' ||pass[i]=='+' ||pass[i]=='/' ||pass[i]=='#' ||pass[i]=='@' ||pass[i]=='<' ||pass[i]=='>' ||pass[i]=='?' ||pass[i]=='_' ||pass[i]=='!')
            s++;
    }
    if(l<1 && u<1 && s<2)
    {
        printf("password requires atleast 1 lower and upper case and atleast 2special characters ");
        flag=1;
    }
    for(int i=0;i<lp-5;i++)
    {
        c=0;
        for(int j=i;j<=i+5;j++)
    {
        if((int)pass[j]>=48 && (int)pass[j]==57)
        c++;
    }
    if(c>5)
       {
       printf("password has repetetive digits");
            flag=1;
    break;
       }
    }
    for(int i=0;i<lp;i++)
    {
        c=0;
        char ch=pass[i];
        for(int j=i;j<lp;j++)
            if(ch==pass[j])
            c++;
            if(c>5)
            {
                printf("character repeated more than 5 times ");
                flag=1;
                break;
            }
    }



}while(flag==1);
if(flag==0)
    printf("password acceptable");
return 0;
}
int len(char pass[])
{
    int c=0;
    while(pass[c]!='\0')
        c++;
        return c;
}
int cmp(char pass[],char user[])
{
    int c=len(pass),flag=0;
    if(len(pass)==len(user))
    {
        for(int i=0;i<c;i++)
            if(pass[i]==user[i])
            flag++;
    } else return 1;
    if(flag==c)
        return 0;
}
