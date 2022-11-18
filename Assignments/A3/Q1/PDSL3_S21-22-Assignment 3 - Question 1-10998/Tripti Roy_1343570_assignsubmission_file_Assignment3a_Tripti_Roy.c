#include <stdio.h>

int main()
{
    char username[50],pass[50];
    int i,j,k=0,flag;
    printf("Enter the user name\n");
    scanf("%s",&username[0]);
    printf("Enter the user name\n");
    scanf("%s",&pass[0]);
    for (i=0; username[i] != '\0';i++){
        flag = 1;
        for(j=0;pass[j]!='\0'; j++){
            if (username[i+j]== pass[j]) {flag = 0;}}
        if(flag==0){printf("Not acceptable\n");return 0;}
    }
    for(i=0;pass[i]!='\0';i++)k++;
    if(k<8||k>15){
            printf("Not acceptable\n");
            return 0;
    }
    for(i=0;pass[i]!='\0';i++)
    {
        flag=0;
        if(pass[i]=='$'||pass[i]=='*'||pass[i]=='+'||pass[i]=='/'||pass[i]=='#'||pass[i]=='@'||pass[i]=='<'||pass[i]=='>'||pass[i]=='?'||pass[i]=='_'||pass[i]=='!'){flag+=1;}
    }
    if(flag==0){printf("Not acceptable\n");return 0;}
    for(i=0;pass[i]!='\0';i++)
    {
        flag=0;
        if(pass[i]>'a'&&pass[i]<'z'){flag+=1;break;}
    }
    if(flag==0){printf("Not acceptable\n");return 0;}
    for(i=0;pass[i]!='\0';i++)
    {
        flag=0;
        if(pass[i]>'A'&&pass[i]<'Z'){flag+=1;break;}
    }
    if(flag==0){printf("Not acceptable\n");return 0;}
    k=0;
    for(i=0;pass[i]!='\0';i++)
    {
        if(pass[i]==pass[i+1]){k++;}
        if(k>5)break;
    }
    if(k>5){printf("Not acceptable\n");return 0;}
    printf("Acceptable\n");
    return 0;
}
