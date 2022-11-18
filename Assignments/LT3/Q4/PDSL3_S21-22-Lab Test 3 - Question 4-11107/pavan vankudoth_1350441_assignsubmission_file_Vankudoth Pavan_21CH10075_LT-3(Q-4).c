#include <stdio.h>

/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No : 21CH10075
Package : Code blocks
Operating system : Windows
*/

int code_brace(char brace)
{
    if (brace=='{') return 1;
    else if (brace=='}') return -1;
    else if (brace=='(') return 2;
    else if (brace==')') return -2;
    else if (brace=='[') return 3;
    else if (brace==']') return -3;
}

int main()
{
    char *exp;
    printf("Enter expression : ");
    scanf("%s",exp);
    int i=0,k;
    while (exp[i]!='\0') i++;
    int lastadd[i+1],lct=0,flag=1;
    for (k=0;k<i;k++){
        if (code_brace(exp[k])>0) {lastadd[lct++]=code_brace(exp[k]);}
        if (code_brace(exp[k])<0) {if ((lastadd[--lct]*-1)!=code_brace(exp[k])) {flag=0;break;}}
    }
    printf("Result : ");
    if (flag==1) printf("Matched parenthesis !!!\n");
    else printf("Unmatched parenthesis !!!\n");
    free(exp);
    return 0;
}
