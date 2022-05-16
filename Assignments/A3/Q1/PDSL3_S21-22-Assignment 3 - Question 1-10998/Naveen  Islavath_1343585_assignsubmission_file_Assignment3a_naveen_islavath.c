#include <stdio.h>

int main()
{
    char un[50],p[50];              //we take string un[50] and p[50] for user name and password respectively
    int i,j,k=0,flag;
    printf("Enter the user name\n");
    scanf("%s",&un[0]);
    printf("Enter the user name\n");
    scanf("%s",&p[0]);
    for (i=0; un[i] != '\0';i++){
        flag = 1;
        for(j=0;p[j]!='\0'; j++){
            if (un[i+j]== p[j]) {flag = 0;}}
        if(flag==0){printf("Not acceptable\n");return;}
    }
    for(i=0;p[i]!='\0';i++)k++;
    if(k<8||k>15){printf("Not acceptable\n");return;}
    for(i=0;p[i]!='\0';i++)
    {
        flag=0;
        if(p[i]=='$'||p[i]=='*'||p[i]=='+'||p[i]=='/'||p[i]=='#'||p[i]=='@'||p[i]=='<'||p[i]=='>'||p[i]=='?'||p[i]=='_'||p[i]=='!'){flag+=1;}
    }
    if(flag==0){printf("Not acceptable\n");return;}
    for(i=0;p[i]!='\0';i++)
    {
        flag=0;
        if(p[i]>'a'&&p[i]<'z'){flag+=1;break;}
    }
    if(flag==0){printf("Not acceptable\n");return;}
    for(i=0;p[i]!='\0';i++)
    {
        flag=0;
        if(p[i]>'A'&&p[i]<'Z'){flag+=1;break;}
    }
    if(flag==0){printf("Not acceptable\n");return;}
    k=0;
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]==p[i+1]){k++;}
        if(k>5)break;
    }
    if(k>5){printf("Not acceptable\n");return;}
    printf("Acceptable\n");
    return 0;
}