
/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-4
Description:-check if password is valid password*/
#include<stdio.h>

int main()
{
    char c;
    int ctr=0,c1=0,c2=0,c3=0,c4=0;//declaring variables
    printf("Enter your password:");//asks for password
    scanf("%c",&c);//gets first character
    if(c>='A' && c<='Z')//checks for first character
    {
        c4++;//increment
    }
    while(c!= '\n')//gets input until user hits enter
    {
        if(c=='$' || c=='#' || c=='&' || c=='%' || c=='@')//checks presence of any of the characters
        {
            c1++;//increment
        }
        if(c>='0' && c<='9')//checks presence of any of the characters
        {
            c2++;//increment
        }
        if(c==' ')//checks presence of any of the characters
        {
            c3++;//increment
        }

        printf("%c",c);//prints password
        ctr++;//increment
        scanf("%c",&c);
    }
    printf("%c",c);
    if((ctr<8 || ctr>12) || (c2<=0) || (c1<=0) || (c3>0) || (c4<=0))
    {
        printf("Invalid password\n");//guides aboutwrong password
    }
    else
    {
        printf("Password is valid\n");
    }
    if(ctr<8 || ctr>12)//checks condition and guides about errors
    {
        printf("Password should not be greater than 12 characters and less than 8 characters\n");
    }
    if(c2<=0)//checks condition and guides about errors
    {
        printf("Password should contain at least 1 digit\n");
    }
    if(c1<=0)//checks condition and guides about errors
    {
        printf("Password should contain at least any one of characters @,#,$,%,&\n");
    }
    if(c3>0)//checks condition and guides about errors
    {
        printf("Password should not contain spaces\n");
    }
    if(c4<=0)//checks condition and guides about errors
    {
        printf("password should start with uppercase letter\n");
    }
    return 0;
}
