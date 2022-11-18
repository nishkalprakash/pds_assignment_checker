/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 3(d)
*/

#include <stdio.h>
void main()
{
    printf("Enter the string sequence:\n");
    char str[21];
    scanf("%s",str);//accepting string sequence
    fflush(stdin);
    char stack[20];//stack array
    int j=0;//stack status
    int f=1;//flag
    for(int i=0;i<21;i++)
    {
        char ch=str[i];
        if(ch=='('||ch=='{'||ch=='[')//checking for opening
            stack[j++]=ch;
        else if((ch==')'&&stack[j-1]!='(') || (ch=='}'&&stack[j-1]!='{') || (ch==']'&&stack[j-1]!='['))//checking for unmatched closing
        {
            f=0;
            break;
        }
        else if(ch=='\0')//checking for end of string
            break;
        else
            j--;//updating stack
    }
    if(f==1)//final check with flag
        printf("\nResult:Matched parenthesis");
    else
        printf("\nResult:Unmatched parenthesis");
}//end of main function
