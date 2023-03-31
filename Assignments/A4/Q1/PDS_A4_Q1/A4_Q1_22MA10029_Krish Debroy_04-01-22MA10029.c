#include <stdio.h>

int main()
{
    /*
    Section 2
    Name : Krish Debroy
    Roll No. : 22MA10029
    Assignment No :- 4
    Description : Password Checker.
    */
    int d_count=0, c_count=0, i_count=0, flag=0,flag1=0, flag2=0, check=0;/* flag is for first character not being uppercase .flag 1 is for
    First character being \n and flag 2 is for white space in password . d_count is number of digits , i_count is number of special characters
    , c_count is the total number of characters. Check is to check whether all conditions are satisfied or not.*/
    char c;
    printf("Enter Password :\n");
    scanf("%c",&c);/*one scanf is out of the loop to check the condition for first character.*/
    /*printf("%c",c);    used for debugging*/
    if (c=='\n')
        {
            flag1=1;
        }
    if(!((c>='A') &&(c<='Z')))
        {
            flag = 1;

        }
    /*c_count++;*/  /*we do not increment for first character because at the end we are counting \n also as a character so it is compensated*/
    do
    {
        scanf("%c",&c);
        /*printf("%c",c);*/
        c_count++;
        if (c>='0' && c<='9')
            d_count++;
        else if (c=='$' || c=='#' || c=='&' || c=='%' || c=='@')
        {
            i_count++;
            /*i_count is the number of special characters*/
        }
        else if (c==' ')
        {
            flag2=1;
        }

    }
    while ((c!='\n') && (flag1==0));/*We also need to impose flag1 condition in case the user inputs \n as first character
    as otherwise program will keep waiting for user to input another \n.*/
    /*printf("%d",c_count);   used for debugging*/
    if (flag == 1)
    {
        printf("Invalid password.\nPassword must start with an uppercase letter.\n");
        check=1;
    }
    if ((c_count< 8) || (c_count>12))
    {
        printf("Invalid password.\nPassword must be between 8-12 characters long.\n");
        check=1;
    }
    if (flag2==1)
    {
        printf("Invalid password.\nSpaces are not allowed in password.\n");
        check=1;
    }
    if (d_count==0)
    {
        printf("Invalid password.\nPassword must have at least one digit.\n");
        check=1;
    }
    if (i_count==0)
    {
        printf("Invalid password.\nPassword must have at least one special character.\n");
        check=1;
    }
    if(check==0)
    {
        printf("Password is valid.");
    }


    return 0;

}
